#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,fact,last_no,no,sum=0;
	printf("enter the no :");
	scanf("%d",&no);
	n=no;
	while(no!=0)
	{
		last_no=no%10;
		fact=1;
			printf("\nlast no: %d\t",last_no);
		for(i=1;i<=last_no;i++)
		{
			fact=fact*i;
		}
		printf("\nfact:%d\t",fact);
		sum=sum+fact;
		no=no/10;
	}
	if(n==sum)
	printf("%d are strong no.",n);
	else
	printf("%d are not strong no.",n);
}
