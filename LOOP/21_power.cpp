#include<stdio.h>
#include<conio.h>

int main()
{
	int i,base,exponent;
	long long power=1;
	printf("enter the base:");
	scanf("%d",&base);
	printf("enter the exponenet:");
	scanf("%d",&exponent);
	for(i=0;i<exponent;i++)
	{
	power=power*base;
	}
	printf("%d ^ %d = %d",base,exponent,power);
getch();
}
