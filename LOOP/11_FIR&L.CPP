#include<stdio.h>
#include<conio.h>
int main()
{
 long long no,first,last,sum=0;
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

 printf("first no: %lld\n",first);
 printf("last no: %lld\n",last);

 getch();
 }
