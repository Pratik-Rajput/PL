// Convert temp from Farenheit to celsius or vice versa

#include<stdio.h>
int main()
{
	char a;
	int c,f;
	printf("Enter the temp in Celsius: ");
	scanf("%d",&c);
	f=(1.8*c) + 32;
	printf("Temperature in Farenheit is: %d",f);
	return 0;
	
	
}

