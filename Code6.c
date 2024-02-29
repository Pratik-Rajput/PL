//Multiplication of two numbers using + operator

#include<stdio.h>
int main()
{
	int a,b,sum=0,i;
	printf("What is a & b:");
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	{
		sum=sum+a;
	}
	printf("Ans is %d",sum);
	return 0;
}
