#include<stdio.h>
#include<conio.h>

int main()
 {
  int length,breath,perimeter;
  clrscr();

  printf("enter the length & breath value:");
  scanf("%d%d",&length,&breath);
 perimeter =2*(length*breath);

 printf("\nperimeter of rectangle %d",perimeter);

  getch();
  }