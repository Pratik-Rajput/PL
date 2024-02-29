

#include<stdio.h>
void fact();
int main()
{
	fact();
	
	return 0;
}

void fact()
{
	int i,n=1,a;
	printf("Enter the number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		n=i*n;
	}
	printf("Factorial of %d is: %d",a,n);
}
