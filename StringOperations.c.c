

#include<stdio.h>
#include<string.h>
int main()
{
	int a,c,b;
	char str1[20],str2[20],str3[20];
	
	printf("Enter a string: ");
	scanf("%s",str1);
	
	printf("Enter a string: ");
	scanf("%s",str2);

	printf("Enter case no.\n1 : for length of string\n2 : for copying\n3 : for concatenation\n4 : for reversing+  ");
	scanf("%d\n",&c);
	
switch(c)
{
	case 1: a=strlen(str1);
	printf("Length of %s is %d",str1,a);
	break;
	
	case 2: strcpy(str3,str1);
	 printf("Str3 is: %s",str3);
	break;
	
	case 3: strcat(str1,str2);
	printf("str1 becomes: %s",str1);
	break;
	
	case 4: strrev(str1);
	printf("Reverse of str1 is: %s",str1);
	break;
	
	
	
	
 } 
	
	
	
	
	return 0;
}
