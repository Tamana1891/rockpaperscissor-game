#include<stdio.h>
#include<string.h>
struct student
{
   	int rollno;
	char name[50];
	float fees;
	char dob[10];
	 	
}stud1,stud2;
int main()
{
	printf("enter rollno.\n");
	scanf("%d",&stud1.rollno);
	printf("enter name\n");
	scanf("%s",&stud1.name);
	printf("enter fees\n");
	scanf("%f",&stud1.fees);
	printf("enetr date of birth");
	scanf("%s",&stud1.dob);
	stud2=stud1;
	printf("student details\n");
	printf("rollno:%d\n",stud2.rollno);
	printf("name:%s\n",stud2.name);
	printf("fees:%f\n",stud2.fees);
	printf("date of birth:%s\n",stud1.dob);
}
