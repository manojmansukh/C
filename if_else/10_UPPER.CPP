#include<stdio.h>
#include<conio.h>
int main()
{
 char ch;
 clrscr();
 printf("enter the char:");
 scanf("%c",&ch);
if(ch>='a' && ch <='z')
 {
    printf("char is an Lower Case");
 }
 else
 printf(" char is Upper Case");
 getch();
 }