#include<stdio.h>
#include<conio.h>

int main()
{
	int i,no,fact=1;
	printf("enter the no:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",no,fact);
}
