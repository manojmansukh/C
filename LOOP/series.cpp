#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,no,isprime;
	printf("prime no from 1 to :");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{       isprime=0;
		for( j=2;j<i/2;j++)
		{
			if(i%j==0)
			{
				isprime=1;
			break;
			}
			
		}
		if(isprime==0)
		{
		printf("%d",i);
		}
	}
}
