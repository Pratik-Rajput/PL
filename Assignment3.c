// Assignment 3: Prime number

#include<stdio.h>
int main()
{
	int a,i,flag=0,p;
	printf("Enter a: ");
	scanf("%d",&a);
	p=a/2;
	for(i=2;i<=p;i++)
	{
		if(a%i==0)
		{flag=1;
		break;
		}	
	}
	if(flag==0)
	{printf("%d is a prime number",a);
	}
	else
	{printf("%d is not a prime number",a);
	}
	return 0;
}
