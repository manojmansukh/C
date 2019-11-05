#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,isprime,no,sum=0;
	printf("enter the prime no from 1 to :");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{ isprime=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isprime=1;
				break;
			}
		}
		if(isprime==0)
		{
		printf("%d\t",i);
		sum+=i;
		}
	}printf("\nsum of prime no : %d",sum);
}
