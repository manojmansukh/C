#include<stdio.h>
#include<conio.h>
int main()
{
 int no,i,mul;
 clrscr();
 printf("enter the no to print the table :");
 scanf("%d",&no);
 for(i=1;i<=10;i++)
 {
 mul=no*i ;
 printf("%d * %d = %d\n",no,i,mul);
 }
 getch();
 }