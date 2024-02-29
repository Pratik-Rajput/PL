

#include<stdio.h>
int main()
{
	int a,n=0;
	printf("Enter the number: ");
	scanf("%d",&a);
	
	while(a!=0)
	{
		a=a/10;
		n++;
	}
	
	printf("No. of digits is: %d",n);

	return 0;
}
