%{
#include <stdio.h>
#include <stdlib.h>
#include "util.h"
int yylex(void);
int yyerror(char*);
%}
%union{
	int   ival;
	float rval;
	char *sval;
}
%token <ival>  INTEGER STRUCT INT VOID CHAR FLOAT IF ELSE SWITCH CASE DEFAULT RETURN BREAK WHILE FOR app aapp sapp mapp dapp rapp aa ss mmm ddd rrr aaa sss lt gt le ge ee ne
%token <rval> REAL 
%token <sval> ID STRING 
%%
Program : DeclarationList {NODE *a = nodeS("Program", nonterminal, _PROG);
       		           if(stackSize == 0)
				initStack();
			   a->child = pop();
			   push(a);
			 
			  }
	;
DeclarationList : DeclarationList Declaration {if(stackSize == 0)initStack();
                     			       NODE *b = pop();
                      			       NODE *a = pop();
                     			       int i = 0;
                     			       if(a->sibling){
                            		       		while(a->sibling){
                                  				 push(a);
                                   				 a = a->sibling;
                                   				 i++;
                            				}
                            				a->sibling = b;
                           				push(a);
                           		 		for(i; i>0; i--){
                                   				b = pop();
                                   				a = pop();
                                   				a->sibling = b;
                                   				push(a);
                                   
                            				}
                      				}
                      				else{
                            				a->sibling = b;
                            				push(a);
                      				}
                      			       }
		| Declaration
		;
Declaration : VarDeclaration
	    | FuncDeclaration
	    | StructDeclaration
	    ;	 
VarDeclaration : TypeSpecifier IDs ';' {NODE *a = nodeS("VarDeclaration", nonterminal, _VARDEC);
					if(stackSize == 0)initStack();
					NODE *b = pop(); 
					NODE *c = pop();
					a->child = c;
					c->sibling = b; 
					push(a); 
				       }
      	       ;
IDs : IDs ',' Value  {if(stackSize == 0)initStack();
                      NODE *b = pop();
                      NODE *a = pop();
                      int i = 0;
                      if(a->sibling){
                            while(a->sibling){
                                   push(a);
                                   a = a->sibling;
                                   i++;
                            }
                            a->sibling = b;
                            push(a);
                            for(i; i>0; i--){
                                   b = pop();
                                   a = pop();
                                   a->sibling = b;
                                   push(a);
                                 
                            }
                      }
                      else{
                            a->sibling = b;
                            push(a);
                      }
                     }
    | Value
    ;
Value : Value '[' INTEGER ']'{if(stackSize == 0)initStack();
      			      NODE *b = pop();
			      if(b->token.number = _ID){
      			      	NODE *a = nodeS("ID_Array", nonterminal, _ID_ARR);
			      	a->child = b;
			      	b->sibling = nodeI($3, terminal);
			      	push(a);
			      }
			      else if(b->token.number = _ID_ARR){
			      	NODE *a;
				int i = 0;
                              	push(b);
                              	b = b->child;
                                if(b->sibling){
                                     while(b->sibling){
                                           push(b);
                                           b = b->sibling;
                                           i++;
                                     }
                                     b->sibling = nodeI($3, terminal);
                                     push(b);
                                     for(i; i>0; i--){
                                           b = pop();
                                           a = pop();
                                           a->sibling = b;
                                           push(a);
                                     }
                                     b = pop();
                                     a = pop();
                                     a->child = b;
                                     push(a);
                                }
			      
			      }
			     
			     }
      | ID {if(stackSize == 0)initStack();
	    NODE *idNode = nodeS($1, terminal, _ID); 
	    push(idNode);
	    
	   }
      ;
FuncDeclaration : TypeSpecifier ID '(' Params ')' CompoundStatement {NODE *a = nodeS("FuncDeclaration", nonterminal, _FUNDEC); 
								     if(stackSize == 0)initStack(); 
								     NODE *b = pop(); 
								     NODE *c = pop(); 
								     a->child = pop(); 
								     a->child->sibling = nodeS($2, terminal, _ID); 
								     a->child->sibling->sibling = c; 
	 							     c->sibling = b; 
								     push(a); 
								    }
		| TypeSpecifier ID '(' Params ')' ';'{NODE *a = nodeS("FuncDeclaration", nonterminal, _FUNDEC); 
						      if(stackSize == 0)initStack(); 
						      NODE *b = pop();  
						      a->child = pop(); 
						      a->child->sibling = nodeS($2, terminal, _ID);  
						      a->child->sibling->sibling = b; 
 						      push(a); 
						     }
		;
StructDeclaration : StructTypeDeclaration ';'{NODE *a = nodeS("StructDeclaration", nonterminal, _STRDEC); 
		  			      if(stackSize == 0)initStack(); 
					      a->child = pop(); 
					      push(a); 
					     }
		  ;
StructTypeDeclaration : STRUCT ID '{' LocalDeclarationList '}'{NODE *a = nodeS("StructType", nonterminal, _STRTYPE); 
		      					       if(stackSize == 0)initStack(); 
							       NODE *b = pop(); 
							       a->child = nodeS($2, terminal, _ID); 
							       a->child->sibling = b; 	
							       push(a); 
							      }
		      ;
Params : ParamList {NODE *a = nodeS("Params", nonterminal, _PARAMS); 
       		    if(stackSize == 0)initStack(); 
		    a->child = pop(); 
		    push(a);
		   }
       | VOID {NODE *a = nodeS("Params", nonterminal, _PARAMS); 
	       if(stackSize == 0)initStack(); 
	       a->child =  nodeS("void", terminal, _TYPE); 
	       push(a); 
	      } 
       |   {NODE *a = nodeS("Params", nonterminal, _PARAMS);
	    if(stackSize == 0)initStack(); 
	    push(a);}
       ;
ParamList : ParamList ',' Param {if(stackSize == 0)initStack();
	 			 NODE *b = pop();
				 NODE *a = pop();
				 int i = 0;
				 if(a->sibling){
					 while(a->sibling){
				 		push(a);
			               		a = a->sibling;
				    	   	i++;
				 	}
					 a->sibling = b;
					 push(a);
					 for(i; i>0; i--){
				        	b = pop();
						a = pop();
						a->sibling = b;
						push(a);
					
					 }
				 }
			 	 else{
					a->sibling = b;
					push(a);
				 }
				 }
	  | Param
          ;
Param : TypeSpecifier Value { if(stackSize == 0)initStack();
      			     NODE *a = nodeS("Param", nonterminal, _PARAM);
			     NODE *b = pop();
			     NODE *c = pop();
			     a->child = c;
			     c->sibling = b;
			     push(a);
			     }
      ;
TypeSpecifier : INT{NODE *intNode = nodeS("int", terminal, _TYPE);
	      	    if(stackSize == 0)initStack(); 
		    push(intNode);}
	      | VOID{NODE *voidNode = nodeS("void", terminal, _TYPE);
		     if(stackSize == 0)initStack(); 
		     push(voidNode);}
	      | CHAR{NODE *charNode = nodeS("char", terminal, _TYPE);
		     if(stackSize == 0)initStack(); 
		     push(charNode);}
	      | FLOAT{NODE *floatNode = nodeS("float", terminal, _TYPE);
		      if(stackSize == 0)initStack(); 	
		      push(floatNode);}
	      | StructType
	      ;
StructType : StructTypeDeclaration
	   | StructTypeReference
 	   ;
StructTypeReference : STRUCT ID{NODE *a = nodeS("StructType", terminal, _STRTYPE);
		    		if(stackSize == 0)initStack(); 
				NODE *b = nodeS($2, terminal, _ID);
				a->child = b; 
				push(a); 
			       }
		    ;
CompoundStatement : '{' LocalDeclarationList StatementList '}' {NODE *a = nodeS("CompoundStatement", nonterminal, _CPDSTMT); 
		  						if(stackSize == 0)initStack(); 
								NODE *b = pop(); 
								a->child = pop(); 
								a->child->sibling = b; 
								push(a); 
								}
		  ;
LocalDeclarationList :  LocalDeclarationList VarDeclaration{if(stackSize == 0)initStack();
					   NODE *b = pop();   //vardec
                                           NODE *a = pop();   //local
                                           int i = 0;
                                           if(a->child){
						if(a->sibling){
                                                while(a->sibling){
                                                        push(a);
                                                        a = a->sibling;
                                                        i++;
                                                }
                                                a->sibling = b;
                                                push(a);
                                                for(i; i>0; i--){
                                                        b = pop();
                                                        a = pop();
                                                        a->sibling = b;
                                                        push(a);
                                                }
                                                b = pop();
                                                a = pop();
                                                a->child = b;
                                                push(a);
						}
						else{
							a->child->sibling = b;
							push(a);
						}
                                           }
                                           else{
                                                a->child = b;
                                                push(a);
                                           }
                                          
                                           }
		     |   {NODE *a = nodeS("LocalDeclarationList", nonterminal, _LDECLIST);
			  if(stackSize == 0)initStack(); 
			  push(a);}
		     ;
StatementList : StatementList Statement{ if(stackSize == 0)initStack();
	      					NODE *b = pop();
						NODE *a = pop();
						int i = 0;
	      					if(a->child){
                                               		if(a->sibling){
                                              			while(a->sibling){
                                                       	 		push(a);
                                                       	 		a = a->sibling;
                                                       			i++;
                                                		}
                                                		a->sibling = b;
                                                		push(a);
                                                		for(i; i>0; i--){
                                                        		b = pop();
                                                        		a = pop();
                                                        		a->sibling = b;
                                                        		push(a);
                                                		}
                                                		b = pop();
                                                		a = pop();
                                                		a->child = b;
                                               	 		push(a);
                                                	}	
                                                	else{
                                                        	a->child->sibling = b;
                                                        	push(a);
                                                	}
                                           	}	
                                           	else{
                                                	a->child = b;
                                                	push(a);
                                           	}
                                          }
	      |    {NODE *a = nodeS("StatementList", nonterminal, _STMTLIST); 
		    if(stackSize == 0)initStack(); 
		    push(a);
		   }
	      ;
Statement : MatchedStatement
	  | OpenStatement 
	  ;
MatchedStatement : ExpressionStatement
		 | ForStatement
 		 | WhileStatement
    		 | ReturnStatement
		 | CompoundStatement
		 | BreakStatement 
		 | SwitchStatement
		 | IF '(' Expression ')' MatchedStatement ELSE MatchedStatement {NODE *a = nodeS("MatchedStatement", nonterminal, _IFSTMT);
										 if(stackSize == 0)initStack();
										 NODE *b = pop();
										 NODE *c = pop();
										 NODE *d = pop();
										 a->child = d;
										 d->sibling = c;
										 c->sibling = b;
										 push(a);
										}
		 ;
OpenStatement : IF '(' Expression ')' Statement {NODE *a = nodeS("OpenStatement", nonterminal, _IFSTMT);
	      					 if(stackSize == 0)initStack();
						 NODE *b = pop();
						 NODE *c = pop();
						 a->child = c;
						 c->sibling = b;
						 push(a);
						}
	      | IF '(' Expression ')' MatchedStatement ELSE OpenStatement {NODE *a = nodeS("MatchedStatement", nonterminal, _IFSTMT);
                                                                           if(stackSize == 0)initStack();
                                                                           NODE *b = pop();
                                                                           NODE *c = pop();
                                                                           NODE *d = pop();
                                                                           a->child = d;
                                                                           d->sibling = c;
                                                                           c->sibling = b;
                                                                           push(a);
                                                                          }
	      ;
SwitchStatement : SWITCH '(' Expression ')' '{' CaseList DefaultCase '}'{NODE *a = nodeS("SwitchStatement", nonterminal, _SWSTMT);
									 if(stackSize == 0)initStack();
									 NODE *b = pop();
									 NODE *c = pop();
									 NODE *d = pop();
								         a->child = d;
									 d->sibling = c;
									 while(c->sibling)
									    c = c->sibling;
									 c->sibling = b;
									 push(a);
							
								         }
		;
CaseList : CaseList CASE INTEGER ':' StatementList{if(stackSize == 0)initStack(); 
					           NODE *b = pop();
						   NODE *a = pop();
						   int i = 0;
						   if(a->sibling){
							while(a->sibling){
					        	   	push(a);
								a = a->sibling;
								i++;}
						   	a->sibling = nodeS("case", terminal, _CASE);
						   	a->sibling->child = nodeI($3, terminal);
						   	a->sibling->child->sibling = b;
						   	push(a);
						   	for(i; i > 0; i--){
						   		b = pop();
								a = pop();
								a->sibling = b;
								push(a);
						   	}
						   }
						   else{
							a->sibling =  nodeS("case", terminal, _CASE);
							a->sibling->child = nodeI($3, terminal);
							a->sibling->child->sibling = b;
							push(a);
						   }
						
						   }
	 | CASE INTEGER ':' StatementList{NODE *a = nodeS("CaseList", nonterminal, _CASE);
					  if(stackSize == 0)initStack();
					  NODE *b = pop();
					  a->child = nodeI($2, terminal);
					  a->child->sibling = b;
					  push(a);
					  }
         ;
DefaultCase : DEFAULT ':' StatementList{NODE *a = nodeS("Default", nonterminal, _DEFAULT);
	    				if(stackSize == 0)initStack();
					a->child = pop();
					push(a);
				 	}
	    |  {NODE *a = nodeS("Default", nonterminal, _DEFAULT);
		if(stackSize == 0)initStack(); 
		push(a);
		}
	    ;
ReturnStatement : RETURN Expression ';'{NODE *a = nodeS("ReturnStatement", nonterminal, _RTSTMT); 	
					if(stackSize == 0)initStack(); 
					a->child = pop(); 
					push(a); 	
					}
        	| RETURN ';'{NODE *a = nodeS("ReturnStatement", nonterminal, _RTSTMT);
			     if(stackSize == 0) initStack();
			     push(a);
			     }
		;
BreakStatement : BREAK ';'{NODE *a = nodeS("BreakStatement", nonterminal, _BRKSTMT);
	       		   if(stackSize == 0)initStack();
                           push(a);
                           }
	       ;
ExpressionStatement : Expression ';'
		    | ' '';'
          	    ;

Expression : AssignExpression
	   | SimpleExpression
	   ;

AssignExpression : Variable Assign Expression{if(stackSize == 0)initStack();
		 			      NODE *b = pop();
				 	      NODE *a = pop();
					      NODE *c = pop();
					      a->child = c;
					      c->sibling = b;
					      push(a);
					      }
		 ;

Variable : ID{NODE *idNode = nodeS($1, terminal, _ID);
	      if(stackSize == 0)initStack(); 
	      push(idNode);}
	 | ID SelectorList{NODE *a = nodeS("IDSelectors", nonterminal, _ID_SLTS);
			   if(stackSize == 0)initStack();
			   NODE *b = pop();
			   a->child = nodeS($1, terminal, _ID);
			   a->child->sibling = b;
			   push(a);
			   }
	 ;

SelectorList : SelectorList Selector {if(stackSize == 0)initStack();
                                           NODE *b = pop();
                                           NODE *a = pop();
					   int i = 0;
					   push(a);
					   a = a->child;
                                           if(a->sibling){
                                                while(a->sibling){
                                                        push(a);
                                                        a = a->sibling;
                                                        i++;
                                                }
                                                a->sibling = b;
                                                push(a);
                                                for(i; i>0; i--){
                                                        b = pop();
                                                        a = pop();
                                                        a->sibling = b;
                                                        push(a);
                                                }
						b = pop();
						a = pop();
						a->child = b;
						push(a);
                                           }
                                           else{
                                                a->sibling = b;
                                                b = pop();
						b->child = a;
						push(b);
                                           }
                                           
                                          }
	     | Selector {NODE *a = nodeS("SelectorList", nonterminal, _SLTLIST);
                         if(stackSize == 0) initStack();
                         a->child = pop();
			 push(a);
                         }

	     ;

Selector : '.' ID {NODE *a = nodeS("StructMember", nonterminal, _STRMBR);
 		   if(stackSize == 0)initStack();		   
		   a->child = nodeS($2, terminal, _ID);
		   push(a);	     
		   }
	 | '[' Expression ']' {NODE *a = nodeS("ArrayIndex", nonterminal, _ARRINDEX);
			       if(stackSize == 0)initStack();
			       a->child = pop();
			       push(a);
			       }
	 ;

SimpleExpression : SimpleExpression '|''|' AndExpression {if(stackSize == 0)initStack();
		 					  NODE *b = pop();
							  NODE *c = pop();
							  NODE *a = nodeS("||", terminal, _OPER); 
							  a->child = c;
							  c->sibling = b;
							  push(a);
						          }
		 | AndExpression
		 ;
AndExpression : AndExpression '&''&' RelExpression {if(stackSize == 0)initStack();
                                                          NODE *b = pop();
                                                          NODE *c = pop();
                                                          NODE *a = nodeS("&&", terminal, _OPER);
                                                          a->child = c;
                                                          c->sibling = b;
                                                          push(a);
                                                          }
	      | RelExpression
	      ;
RelExpression : RelExpression RelOperator AddExpression{if(stackSize == 0)initStack();
                                                        NODE *b = pop();
                                                        NODE *a = pop();
                                                        NODE *c = pop();
                                                        a->child = c;
                                                        c->sibling = b;
                                                        push(a);
                                                        }

	      | AddExpression
	      ;
RelOperator : lt {NODE *a = nodeS("<", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
	    | gt {NODE *a = nodeS(">", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
 	    | le {NODE *a = nodeS("<=", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
            | ge {NODE *a = nodeS(">=", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
     	    | ee {NODE *a = nodeS("==", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
            | ne {NODE *a = nodeS("!=", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
	    ;


AddExpression : AddExpression Oper1 Term{if(stackSize == 0)initStack();
                                          NODE *b = pop();
					  NODE *a = pop();
                                          NODE *c = pop();
                                          a->child = c;
                                          c->sibling = b;
                                          push(a);
                                          }

	      | Term
	      ;


Oper1 : aaa {NODE *a = nodeS("+", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
      | sss {NODE *a = nodeS("-", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
      ;

Term : Term Oper2 Factor {if(stackSize == 0)initStack();
                           NODE *b = pop();
                           NODE *a = pop();
			   NODE *c = pop();
                           a->child = c;
                           c->sibling = b;
	                   push(a);
                           }

     | Factor
     ;

Oper2 : mmm {NODE *a = nodeS("*", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
      | ddd {NODE *a = nodeS("/", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
      | rrr {NODE *a = nodeS("%", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
      ;

Factor : '(' Expression ')'
       | FunctionCall
       | sss Factor {if(stackSize == 0)initStack();
		     NODE *b = pop();
		     NODE *a = pop();
	     	     a->child = b;
		     push(a);
		     }
       | Variable
       | Variable IncDec {NODE *a = nodeS("IncDecExpression", nonterminal, _INCDEC_EXP); 
			  if(stackSize == 0)initStack(); 
			  NODE *b = pop(); 
			  NODE *c = pop();
			  a->child = c; 
			  c->sibling = b;
			  push(a); 
			  }
       | IncDec Variable {NODE *a = nodeS("IncDecExpression", nonterminal, _INCDEC_EXP);
                          if(stackSize == 0)initStack();
                          NODE *b = pop();
                          NODE *c = pop();
                          a->child = c;
                          c->sibling = b;
                          push(a);
                          }
       | NumberLiteral
       ;

NumberLiteral : INTEGER{NODE *intNode = nodeI($1, terminal);if(stackSize == 0)initStack(); push(intNode);}
	      | REAL{NODE *realNode = nodeR($1, terminal);if(stackSize == 0)initStack(); push(realNode);} 
	      ;

IncDec : aa {NODE *a = nodeS("++", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
       | ss {NODE *a = nodeS("--", terminal, _OPER);if(stackSize == 0)initStack(); push(a);}
       ;

WhileStatement : WHILE '(' Expression ')' CompoundStatement{NODE *a = nodeS("WhileStatement", nonterminal, _WHLSTMT);
							    if(stackSize == 0)initStack();
							    NODE *b = pop();
							    NODE *c = pop();
							    a->child = c;
						            c->sibling = b;
							    push(a);
							   }
	       | WHILE '(' Expression ')' ';' {NODE *a = nodeS("WhileStatement", nonterminal, _WHLSTMT); 
					       if(stackSize == 0)initStack(); 
					       NODE *b = pop(); 
					       a->child = b; 
					       push(a);}
	       ;

ForStatement : FOR '(' Expression ';' Expression ';' Expression ')' ';'{NODE *a = nodeS("ForStatement", nonterminal, _FORSTMT);
    		                                                        if(stackSize == 0)initStack();
                		                                        NODE *b = pop();
                                	         	                NODE *c = pop();
									NODE *d = pop();
                                                           		a->child = d;
                                                            		d->sibling = c;
									c->sibling = b;
                                                            		push(a);
                                                            		}

	     | FOR '(' Expression ';' Expression ';' Expression ')' CompoundStatement{NODE *a = nodeS("ForStatement", nonterminal, _FORSTMT);
                                                                        	      if(stackSize == 0)initStack();
                                                                        	      NODE *b = pop();
                                                                        	      NODE *c = pop();
                                                                        	      NODE *d = pop();
										      NODE *e = pop();
                                                                        	      a->child = e;
                                                                        	      e->sibling = d;
                                                                        	      d->sibling = c;
										      c->sibling = b;
                                                                         	      push(a);
                                                                        	      }

             ;

FunctionCall : ID '(' Arguments ')'{NODE *a = nodeS("FunctionCall", nonterminal, _FUNCALL); 
	     			    if(stackSize == 0)initStack(); 
				    NODE *b = pop();
				    a->child = nodeS($1, terminal, _ID); 
				    a->child->sibling = b;
				    push(a);
				   }
	     ;

Arguments : ArgumentList {NODE *a = nodeS("Arguments", nonterminal, _ARGS);
	  		  if(stackSize == 0)initStack();
			  a->child = pop();
			  push(a);
			  }
	  |  {NODE *a = nodeS("Arguments", nonterminal, _ARGS);if(stackSize == 0)initStack(); push(a);}
          ;

ArgumentList : ArgumentList ',' Expression{if(stackSize == 0)initStack();
	     				   NODE *c = pop();
				           NODE *b = pop();
					   int i = 0;
					   if(b->sibling){
						while(b->sibling){
							push(b);
							b = b->sibling;
							i++;
						}
						b->sibling = c;
						push(b);
						for(i; i>0; i--){
							c = pop();
							b = pop();
							b->sibling = c;
							push(b);
						}
					   }
					   else{
						b->sibling = c;
						push(b);
					   }
					  
					  }
	     | ArgumentList ',' STRING {if(stackSize == 0)initStack();
                                           NODE *c = pop();
                                           NODE *b = pop();
                                           int i = 0;
					   if(b->sibling){
                                                while(b->sibling){
                                                        push(b);
                                                        b = b->sibling;
                                                        i++;
                                                }
                                                b->sibling = c;
                                                push(b);
                                                for(i; i>0; i--){
                                                        c = pop();
                                                        b = pop();
                                                        b->sibling = c;
                                                        push(b);
                                                }
                                           }
                                           else{
                                                b->sibling = c;
                                                push(b);
                                           }
                                          
                                          }
             | Expression 
             | STRING {NODE *strNode = nodeS($1, terminal, _STRING); if(stackSize == 0)initStack(); push(strNode);}
	     ;

Assign : app  {NODE *a = nodeS("=", terminal, _OPER); if(stackSize == 0)initStack(); push(a);}
       | aapp {NODE *a = nodeS("+=", terminal, _OPER); if(stackSize == 0)initStack(); push(a);}
       | sapp {NODE *a = nodeS("-=", terminal, _OPER); if(stackSize == 0)initStack(); push(a);}
       | mapp {NODE *a = nodeS("*=", terminal, _OPER); if(stackSize == 0)initStack(); push(a);}
       | dapp {NODE *a = nodeS("/=", terminal, _OPER); if(stackSize == 0)initStack(); push(a);}
       | rapp {NODE *a = nodeS("%=", terminal, _OPER); if(stackSize == 0)initStack(); push(a);}
       ;
%%

int main(int argc, char *argv[]){
	if(argc == 1) exit(0);
	extern FILE *yyin;
 	yyin = fopen(argv[1], "r");
	yyparse();
        printTree(pop());
	fclose(yyin);
	return 0;
}
