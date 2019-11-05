#include<stdio.h>
#include<conio.h>

int main()
{
  int a[22][22],mul[22][22];
   int i,j,r,c,n;
   clrscr();

   printf("enter the row & column:");
   scanf("%d%d",&r,&c);

    printf("enter the element :");
   for(i=0;i<r;i++)
     for(j=0;j<c;j++)
     scanf("%d",&a[i][j]);

     printf("\n array element of :\n");
     for(i=0;i<r;i++)
     {
     for(j=0;j<c;j++)
      {
	printf("%d\t",a[i][j]);
      }
      printf("\n");
     }

     printf("enter multiplier:");
     scanf("%d",n);

      for(i=0;i<r;i++)
     {
       for(j=0;j<c;j++)
       {
	a[i][j]= n *  a[i][j];
	}
      }

      printf("\n scaler of array element :\n");
     for(i=0;i<r;i++)
     {
     for(j=0;j<c;j++)
      {
	printf("%d\t",a[i][j]);
      }
      printf("\n");
      }


     getch();
   }
