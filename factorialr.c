//factorial using recursion

#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{return 1;
	}
	else
	{return n*fact(n-1);
	}
	
}

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int res=fact(n);
	printf("Factorial of %d is: %d",n,res);
	return 0;
}
