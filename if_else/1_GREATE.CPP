#include<stdio.h>
#include<conio.h>

int main()
 {
  int a,b;
  clrscr();

  printf("enter the 2  value:");
  scanf("%d%d",&a,&b);
   if(a>b)
    printf(" A is greater value:%d",a);
   else
     printf(" B is greater value :%d",b);
  getch();
  }