#include<stdio.h>

struct student{
	int rollno;
	char name[5];
	int marks[5];
	
}s1[10];

int main()
{
	int j;
	float n=0;	
for(j=0;j<10;j++)
{
	int sum=0,i,percent;
	printf("Enter your rollno: ");
	scanf("%d",&s1[j].rollno);
	printf("Enter your name: ");
	scanf("%s",s1[j].name);
	
	for(i=0;i<5;i++)
{
	printf("Enter marks in Subject %d: ",i+1);
	scanf("%d",&s1[j].marks[i]);
}
	for(i=0;i<5;i++)
	{sum=sum+s1[j].marks[i];
	}
	percent=sum/5;
	
	if(percent>=40)
	{printf("Roll no. %d : Pass\n",s1[j].rollno);
	n=n+1;
	}
	else
	{printf("Roll no. %d : Fail\n",s1[j].rollno);
	}
}
	n=(n/2)*100;
	printf("Percentage of students passed = %f%",n);
	return 0;
}
