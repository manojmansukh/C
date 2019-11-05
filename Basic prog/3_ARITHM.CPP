#include<stdio.h>
#include<conio.h>

int main()
 {
  int a,b,add,mul,div,sub;
  clrscr();

  printf("enter the 2  value:");
  scanf("%d%d",&a,&b);
  add=a+b;
  sub=a-b;
  mul=a*b;
  div=a%b;

 printf("\nadition of two no: %d",add);
 printf("\nsubstraction of two no: %d",sub);
 printf("\nmul of two no: %d",mul);
 printf("\ndiv of two no: %d",div);

  getch();
  }