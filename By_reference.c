#include<stdio.h>

void swap(int*a,int*b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("Swap func, a=%d & b=%d\n",*a,*b);
}

int main(){
	int a=10,b=20;	
	printf("Before swap, a=%d & b=%d\n",a,b);
	
	swap(&a,&b);
	printf("In main func, a=%d & b=%d",a,b);
	return 0;
}
