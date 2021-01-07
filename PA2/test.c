struct student{
	int ID;
	char name[32];
};
int stuInfo(struct student stu[4]){
	int i, num = 3;
	for(i=0;i<=num;i++){
		printf("ID: %d, Name: %s\n", stu[i].ID, stu[i].name);
	}
	return 1;
}
