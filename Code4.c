
#include<stdio.h>
int main()
{
	int a,b,rem,q;
	printf("What's a & b: ");
	scanf("%d %d",&a,&b);
	q=a/b;
	rem=a-(q*b);
	printf("The remainder is: %d",rem);
	return 0;
}
