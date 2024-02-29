// Finding GCD

#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter two numbers a & b: ");
	scanf("%d%d",&a,&b);
	for(i=b;i!=0;i--)
	{
		if(a%i==0 && b%i==0)
		{printf("%d is the GCD",i);
		i=1;
	//	break;
		}	
		
	
	}
	return 0;
}
