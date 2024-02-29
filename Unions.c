#include<stdio.h>


union employee{
	char name[10];
	float salary;
	char designation[10];
	float sal;
}e1,e2;

int main()
{
	
	printf("Enter youtr name: ");
	scanf("%s",e1.name);
	printf("Your name: %s\n",e1.name);
	
	printf("Enter your designation: ");
	scanf("%s",e1.designation);
	printf("Your designation: %s\n",e1.designation);
	
	printf("Enter your Basic pay: ");
	scanf("%f",&e1.salary);
	e1.sal=e1.salary + e1.salary*(0.7);
	printf("Your Gross salary is: %f",e1.sal);
	
	return 0;
}
