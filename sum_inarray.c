

#include<stdio.h>
int main()
{
	int n,i,j,sum_e=0,sum_o=0;
	printf("No. of elements: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	
	for(j=0;j<n;j++)
	{
		if(a[j]%2==0)
		{sum_e=sum_e+a[j];
		}
		else
		{sum_o=sum_o+a[j];
		}
	}
	
	printf("Sum of even elements is: %d\n",sum_e);
	printf("Sum of odd elements is: %d",sum_o);
	
	
	
	
	return 0;
}
