// Structures for marks of students

#include<stdio.h>

struct student{
	int rollno;
	char name[5];
	int marks[5];
	
}s1;

int main()
{
	printf("Enter your rollno: ");
	scanf("%d",&s1.rollno);
	printf("Enter your name: ");
	scanf("%s",s1.name);
	printf("Enter your Chem marks: ");
	scanf("%d",&s1.marks[0]);
	
	printf("your name: %s ",s1.name);
	return 0;
}
