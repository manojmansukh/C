#include<stdio.h>
#include<conio.h>
int main()
{
 long long no,i,pro=1;
 clrscr();
 printf("enter the no :");
 scanf("%lld",&no);
 //last=no%10;
// first=no;
 while(no!=0)
 {
  pro=pro*(no%10);
   no=no/10;
 }
 printf("product of digit: %lld",pro);
 getch();
 }
