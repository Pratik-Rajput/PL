
#include<stdio.h>


int main(){
	
	int *ptr1,*ptr2;
	int a=10,b=20,c;
	
	ptr1=&a; ptr2=&b;
	c=*ptr1+*ptr2;
	
	printf("Sum is: %d",c);
	
	
	return 0;
}
