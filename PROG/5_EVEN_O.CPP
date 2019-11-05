#include<stdio.h>
#include<conio.h>
int main()
{
 int no;
 clrscr();
 printf("enter the no:");
 scanf("%d",&no);
 if ((no % 2==0) && (no % 11==0))
 {
    printf("%d is even",no);
 }
 else
 printf(" %d is odd",no);
 getch();
 }