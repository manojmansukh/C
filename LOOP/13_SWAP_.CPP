#include<stdio.h>
#include<conio.h>
int main()
{
 long long no,first,last,temp;
 clrscr();
 printf("enter the no :");
 scanf("%lld",&no);
 last=no%10;
// first=no;
 while(no>=10)
 {
   no=no/10;
 }
 first=no;
 printf("before swapping :%d\n",no);
 temp=first;
 first=last;
 last=temp;
 printf("after swapping:%d\n",no);
 getch();
 }
