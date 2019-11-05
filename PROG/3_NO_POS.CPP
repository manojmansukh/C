#include<stdio.h>
#include<conio.h>

int main()
 {
  int a,b,c;
  clrscr();

  printf("enter the   value:");
  scanf("%d",&a);
   if(a>0 )
    printf(" %d is positive value.",a);
   else if(a<0)
     printf(" %d is negative value.",a);
   else
     printf("  value is zero.");
  getch();
  }