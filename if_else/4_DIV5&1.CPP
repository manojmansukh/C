#include<stdio.h>
#include<conio.h>
int main()
{
 int no;
 clrscr();
 printf("enter the no:");
 scanf("%d",&no);
 if ((no % 5==0) && (no % 11==0))
 {
    printf("no is div by 5 & 11");
 }
 else
 printf("no is not div by 5 & 11");
 getch();
 }