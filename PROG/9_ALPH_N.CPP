#include<stdio.h>
#include<conio.h>
int main()
{
 char ch;
 clrscr();
 printf("enter the char:");
 scanf("%c",&ch);
if((ch>='a' && ch <='z') || (ch>='A' && ch <='z'))
 printf("%c is an alphabet",ch);

 else if(ch>=0 && ch>=9)
 printf(" %c it is number",ch);

 else
 printf("it is special char");
 getch();
 }