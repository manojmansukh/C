#include<stdio.h>
#include<conio.h>

int main()
 {
  int i;
  float j;
  char c;
  char a[10];
  clrscr();

  printf("enter the int value:");
  scanf("%d",&i);

  printf("\nenter the float value:");
  scanf("%f",&j);

  printf("\nenter the char value:");
  scanf("%s",&c);

 printf("\nenter the string:");
  scanf("%s",&a);

  printf("\nint value: %d",i);
  printf("\nfloat value: %f",j);
  printf("\nchar value:%c ",c);
 printf("\nstring: %s",a);

  getch();
  }