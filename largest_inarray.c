

#include<stdio.h>
int main()
{
	int n,i,k=0;
	printf("No. of elements: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{k=i+1;
		}

}
	printf("Largest element: %d",a[k]);	

	return 0;
}
