#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,r,c,a[10][10],b[10][10],add[10][10];
clrscr();
printf("enter the no of row & columns of matrix:");
scanf("%d%d",&r,&c);
printf("enter the no for A  matrix:\n");
for(i=0;i<r;i++)
  for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);

 printf("enter the no for B  matrix:\n");
 for(i=0;i<r;i++)
  for(j=0;j<c;j++)
    scanf("%d",&b[i][j]);


 printf("addition Of Matrix=\n");
	 for(i=0;i<r;i++)
	 {
		 for(j=0;j<c;j++)
		{
			 add[i][j]=  a[i][j]+b[i][j];
		      printf(" %d\t",add[i][j]);
		}
	 printf("\n");
	}
    getch();
  }