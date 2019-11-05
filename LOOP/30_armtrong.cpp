#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,rem,no,sum=0;
	printf("enter the no :");
	scanf("%d",&no);
	n=no;
	while(no>0)
	{
		rem=no%10;
		sum=sum+(rem*rem*rem);
		no=no/10;
	}
	if(n==sum)
	printf("%d are armstrong no.",n);
	else
	printf("%d are not armstrong no.",n);
}
