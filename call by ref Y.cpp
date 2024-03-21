#include<stdio.h>
void swap(int*,int*);
int main()
{
	int x=45;
	int y=66;
	printf("before swapping values in main x=%d, y=%d",x,y);
	swap(&x,&y);
	printf("after swapping values in main x=%d, y=%d",x,y);
	
}
void swap(int*x, int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("after swapping x=%d,y=%d",*x,*y);
}

