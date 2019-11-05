#include<stdio.h>
#include<conio.h>
int main()
{
 int no,count=0;
 clrscr();
 printf("enter the no :");
 scanf("%d",&no);

 while(no!=0)
 {
  count++;
  no=no/10;
}
 printf("\n total digit in no:%d",count);
 getch();
 }
