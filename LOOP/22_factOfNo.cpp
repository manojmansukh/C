#include<stdio.h>
#include<conio.h>

int main()
{
	int i,no,fact=1;
	printf("enter the no:");
	scanf("%d",&no);
		printf("facts of no :");
	for(i=1;i<=no;i++)
	{
	if(no%i==0)
	{
		printf("%d\t",i);
	}
	}
}
