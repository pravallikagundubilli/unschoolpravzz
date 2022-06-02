#include<stdio.h>
struct employee{
	char name[100];
	int empid;
	int experience;
	int salary;
	
};
int main(){
	int i;
	struct employee e[5];
	printf("enter the details of 5 employees\n");
	for(i=0;i<5;i++){
		printf("name of employee,empid,experience,salary:\n");
		scanf("%s %d %d %d",&e[i].name,&e[i].empid,&e[i].experience,&e[i].salary);
	}
	for(i=0;i<5;i++){
		printf("--------------------------------------\n");
		printf("Name: %s \n",e[i].name);
		printf("Employee ID: %d\n",e[i].empid);
		printf("Experience of the employee: %d\n",e[i].experience);
		printf("Salary of the employee: %d\n",e[i].salary);
		printf("\n\n\n");
	}
}
