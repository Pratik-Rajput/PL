// Volume & Surface Area of cylinder

#include<stdio.h>
void area()
{
	float h,r,ar1,ar2,ar;
	const float pi=3.14;
	printf("What is the height,radius of cylinder: ");
	scanf("%f%f",&h,&r);
	ar1=2*pi*r*r;
	ar2=2*pi*r*h;
	ar=ar1+ar2;
	printf("Surface area of cylinder: %f",ar);
}
	
int main()
{
	area();
	return 0;
}
