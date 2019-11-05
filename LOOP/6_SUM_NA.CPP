#include<stdio.h>
#include<conio.h>
int main()
{
 int no,i=1,sum=0;
 clrscr();
 printf("enter the no from 1 to : ");
 scanf("%d",&no);
 while(i<=no)
{
  printf("%d\t",i);
  sum+=i;
  i++;
}
 printf("\nsum ofnatural no from 1 to %d : %d",no,sum);
 getch();
 }