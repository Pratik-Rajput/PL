// Swapping of variables without using third variable
#include<stdio.h>
int main()
{
	int a=3,b=7;
	a=a*b/a;
	b=a*b/b;
	printf("a=%d \n b=%d",a,b);
	
	return 0;
}
