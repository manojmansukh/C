#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,r,c,a[20][20],b[20][20],add[20][20];
	printf("enter the no of rows:");
	scanf("%d",&r);
	printf("enter the no of columns:");
	scanf("%d",&c);
	
	printf("enter the valu for Matrix 1:");
	for(i=0;i<r;i++)
	   for(j=0;j<c;j++)
	     scanf("%d\t",&a[i][j]);
	
		printf("enter the valu for Matrix 2:");
	for(i=0;i<r;i++)
	   for(j=0;j<c;j++)
	     scanf("%d\t",&b[i][j]);
	     
	printf("Matrix 1:\n");
	for(i=0;i<r;i++)
	{
		 for(j=0;j<c;j++)
	    {
		 printf("%d\t",a[i][j]);
	 	}printf("\n");
	}
	     
	printf("Matrix 2:\n");
	for(i=0;i<r;i++)
	{
		 for(j=0;j<c;j++)
	    {
		 printf("%d\t",b[i][j]);
	 	}printf("\n");
	}
	     
	getch();
}
