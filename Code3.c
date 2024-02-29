// Multiplication of matrices

#include<stdio.h>
int main()
{
	int m1[2][2],m2[2][2],r[2][2],i,j,k,sum=0;
	
	printf("Enter matrix m1:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{printf("Enter the element for i=%d & j=%d : ",i,j);
		scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter matrix m2:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{printf("Enter the element for i=%d & j=%d : ",i,j);
		scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}

	printf("Resultant matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{sum= m1[i][j] * m2[j][i] + sum;
			j++;	
		
			}
	
		r[i][j]= sum;	
		printf("%d ", r[i][j]);
		}
		printf("\n");
	}
	return 0;
}
