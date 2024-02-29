// WAP FOR ADDITION OF MATRICES
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter the elements of matrix A:");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter element for i=%d & j=%d : ",i,j);
		scanf("%d",& a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter the elements of matric B: ");
	for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
			{printf("Enter element for i=%d & j=%d : ",i,j);
			scanf("%d",& b[i][j]);
			}
			printf("\n");
		}
		
	printf("Result matrix C: \n");
		
	for(i=0;i<3;i++)
			{
			for(j=0;j<3;j++)
			{c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
			}
			printf("\n");
		}

	return 0;
}
