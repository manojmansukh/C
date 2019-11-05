#include<stdio.h>
#include<conio.h>
int main()
{
 int cp,sp,amt;
 clrscr();
 printf("enter the cost price:");
 scanf("%c",&cp);
  printf("enter the selling price:");
 scanf("%c",&sp);
 if(sp>cp)
   amt=sp-cp;
   printf(" profit:%d",amt);
   else
   amt=cp-sp
   printf("loss:%d",amt);
 getch();
 }