#include<stdio.h>

struct complex{
	int real;
	int img;
}n1,n2,r1;

int main(){
	printf("Enter the real & imaginary part of n1: ");
	scanf("%d%d",&n1.real,&n1.img);
	
	printf("Enter the real & imaginary part of n2: ");
	scanf("%d%d",&n2.real,&n2.img);
	
	r1.real=n1.real*n2.real - n1.img*n2.img;
	r1.img= n1.real*n2.img + n1.img*n2.real;
	
	printf("Solution of multiplication is: %d + %di",r1.real,r1.img);
	
	
	return 0;
}
