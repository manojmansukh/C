#include<stdio.h>
#include<conio.h>

int main()
 {
  int length,breath,area;
  clrscr();

  printf("enter the length & breath value:");
  scanf("%d%d",&length,&breath);
 area=(length*breath);

 printf("\narea of rectangle %d",area);

  getch();
  }