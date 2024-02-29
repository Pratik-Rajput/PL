// Assignment 1

#include<stdio.h>
int main()
{
	float hra=0,ta=0,pt=0,gs=0,np=0;
	int bp;
	printf("Enter your basic pay: ");
	scanf("%d",&bp);
	hra=bp*10/100;
	printf("%2f",hra);
	ta=bp*5/100;
	printf("%2f",ta);
	gs=bp+hra+ta;
	printf("%2f",gs);
	pt=gs*2/100;
	np=gs-pt;
	printf("Net payable salary is: %2f",np);
	
	return 0;
}
