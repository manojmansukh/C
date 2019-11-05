#include<stdio.h>
#include<conio.h>

int main()
{
  int a[22][22],b[22][22];
   int i,j,r,c,no,equal=1;
   clrscr();

   printf("enter the row & column:");
   scanf("%d%d",&r,&c);

    printf("enter the element for A ;");
   for(i=0;i<r;i++)
     for(j=0;j<c;j++)
     scanf("%d",&a[i][j]);

     printf("enter the element for B;");
     for(i=0;i<r;i++)
     for(j=0;j<c;j++)
     scanf("%d",&b[i][j]);

     printf("\n array element of A:\n");
     for(i=0;i<r;i++)
     {
     for(j=0;j<c;j++)
      {
	printf("%d\t",a[i][j]);
      }
      printf("\n");
     }

      printf("\n array element B:\n");
     for(i=0;i<r;i++)
     {
     for(j=0;j<c;j++)
      {
	printf("%d\t",b[i][j]);
      }
      printf("\n");
      }

      for(i=0;i<r;i++)
     {
     for(j=0;j<c;j++)
     {
     if( a[i][j]!=b[i][j])
     {
       equal=0;
       break;
     }
     }
     }
     if(equal==1)
     printf("matrix A & B are equal");
     else
     printf("matrix A & B are not equal");


     getch();
   }