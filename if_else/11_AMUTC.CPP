#include<stdio.h>
#include<conio.h>
int main()
{

 int amt,n500,n100,n50,n20,n10,n5,n2,n1;
 n500=n100=n50=n20=n10=n5=n2=n1=0;
 clrscr();
 printf("enter the amount:");
 scanf("%d",&amount);
 if(amout>=500)
 n500=amt/500;
 amt-=amt-n500*500;

 if(amout>=100)
 n100=amt/100;
 amt-=amt-n100*100;

if(amout>=50)
 n50=amt/50;
 amt-=amt-n50*50;

 if(amout>=20)
 n20=amt/20;
 amt-=amt-n20*20;

 if(amout>=10)
 n10=amt/10;
 amt-=amt-n10*10;

 if(amout>=5)
 n5=amt/5;
 amt-=amt-n5*5;

 if(amout>=2)
 n2=amt/2;
 amt-=amt-n2*2;

 if(amout>=500)
 n1amt/500;
 amt-=amt-n1*1;

 getch();
 }