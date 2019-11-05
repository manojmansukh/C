#include<stdio.h>
#include<conio.h>
int main()
{
 int no,rev;
 clrscr();
 printf("enter the no :");
 scanf("%d",&no);
 while(no!=0)
 {
 rev=no%10;
 printf("%d",rev);
 no=no/10;
 }
// printf("product of digit: %lld",pro);
 getch();
 }
