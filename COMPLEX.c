#include<stdio.h>

struct complex{
	int real;
	char img;
};

int addreal(x,y){
	
}

int main(){
	struct complex n1,n2,r;
	n1.real=10;
	n1.img=3;
	
	n2.real=12;
	n2.img=5;
	
	r.real=n1.real+n2.real;
	r.img=n1.img+n2.img;
	printf("The resultant Imaginary no. is: %d+%di",r.real,r.img);                                                                                                                                                                                     
	
	return 0;
}
