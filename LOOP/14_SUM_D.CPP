#include<stdio.h>
#include<conio.h>
int main()
{
 int no,sum=0;
 clrscr();
 printf("enter the no :");
 scanf("%d",&no);

 while(no!=0)
 {

  sum=sum+no%10;
  no=no/10;
}
 printf("\n total of digit :%d",sum);
 getch();
 }
