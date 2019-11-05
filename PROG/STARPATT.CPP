#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s,n,r,c;
	clrscr();
	printf("enter the no of rows in pyramind:");
	scanf("%d",&n);
	s=n;

	for(i=1;i<n;i++)
	{
	  for(j=1;j<s;j++)
	  printf(" ");
	  s--;

	  for(j=1;j<=i*2-1;j++)
	  printf("*");
	  printf("\n");
	}
	getch();
	}