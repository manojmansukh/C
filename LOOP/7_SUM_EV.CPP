#include<stdio.h>
#include<conio.h>
int main()
{
 int i=1, no,sum=0;
 clrscr();
 printf("enter the no from 1 to  :");
 scanf("%d",&no);
  printf("\t\t\t\tODD NO\t\t\t\t\t") ;
 while(i<=no)
 {
 if(i%2==1)
  printf("%d\t",i);
   sum+=i;
  i++;
}
 printf("\nsum ofnatural no from 1 to %d : %d",no,sum);
 getch();
 }
