// count the no. of digits in a number

#include<stdio.h>
int cnt=0;
int count(int n)
{
	if(n>0)
	{cnt++;
	 count(n/10);
	}
	else
	{return cnt;
	}
}

int main()
{
	int no,c;
	printf("Enter the number: ");
	scanf("%d",&no);
	c=count(no);
	printf("No. of digits in the no. is: %d",c);
	return 0;
}
