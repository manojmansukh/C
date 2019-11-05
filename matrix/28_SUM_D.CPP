#include<stdio.h>
#include<conio.h>

int main()
{
  int a[22][22];
   int i,j,r,c,sum=0;
   clrscr();

   printf("enter the row & column:");
   scanf("%d%d",&r, &c);

    printf("enter the element :");
   for(i=0;i<r;i++)
    for(j=0;j<c;j++)
     scanf("%d",&a[i][j]);

    printf("array element:\n");
   for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
     {
     printf("%d\t",a[i][j]);
     }
     printf("\n");
     }
     for(i=0;i<r;i++)
     {
	sum= sum +a[i][i];
      }

     printf("add of main diagonal:%d",sum);





     getch();
   }
