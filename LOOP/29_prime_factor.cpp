#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,isprime,no,sum=0;
	printf("enter the no :");
	scanf("%d",&no);
	for(i=2;i<=no;i++)
	{
		if(no%i==0) //factor got
		{    //3,5,15
		isprime=0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					isprime==1;
					break;
				}	
				
			}
			if(isprime==0)
			{
				printf("%d\t",i);
			}
			
		}
	}
}
