#include<stdio.h>
#include<conio.h>

int main()
{
	int no,flag=0;
	printf("enter the no:");
	scanf("%d",&no);
	
	for(int i=2;i<no/2;i++)
	{
		if(no%i==0)
		flag=1;
		break;
	}
	if(flag==0)
	printf("no is prime no.");
	else
	printf("no is not prime no.");
}
