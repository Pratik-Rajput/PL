#include<stdio.h>
int main()
{
	int x =40;
	int y =22;
	int  *ptr1;
	int  *ptr2;
	int  temp;
	temp=*&x;
	x=*&y;
	y=*&temp;
	printf("first number is %d/n",x);
	printf("first number is %d/n",y);
	
	return 0;
}
