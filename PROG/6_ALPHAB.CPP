#include<stdio.h>
#include<conio.h>
int main()
{
 char ch;
 clrscr();
 printf("enter the char:");
 scanf("%c",&ch);
if((ch>='a' && ch <='z') || (ch>='A' && ch <='z'))
 {
    printf("char is an alphabet");
 }
 else
 printf(" char is not alphabet");
 getch();
 }