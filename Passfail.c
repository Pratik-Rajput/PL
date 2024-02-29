

#include<stdio.h>
int main()
{
	int n,i,x=0,pass,fail,fp;
	printf("Number of students in class: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
{
	
	int ppl,dc,phy,mc,chem,agg;
	printf("\nEnter marks in PPL,DC,PHYSICS,MC,CHEMISTRY: ");
	scanf("%d%d%d%d%d",&ppl,&dc,&phy,&mc,&chem);
	
	if(ppl>=40 && dc>=40 && phy>=40 && mc>=40 && chem>=40)
	{
		x=x+1;
	agg=(ppl+phy+dc+mc+chem)/5;
		if(agg>75)
		{printf("Distinction");
		}
		else if(agg<75 && agg>=60)
		{printf("First Class");
		}
		else if(agg<60 && agg>=50)
		{printf("Second class");
		}
		else if(agg<50 && agg>=40)
		{printf("Third class");
		}
		else
		{printf("Fail 2");
		}
	}
	else
	{printf("Failed");
	}
	printf("Agg= %d",agg);
}
	float fp,fail,x
	fail=n-x;
	printf("Number of students passed: %d",x);
	printf("Number of students failed: %d",n-x);
	fp=100*fail/x;
	printf("Fail percentage= %d",fp);
	
	return 0;
}

