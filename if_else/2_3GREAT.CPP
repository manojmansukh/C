#include<stdio.h>
#include<conio.h>

int main()
 {
  int a,b,c;
  clrscr();

  printf("enter the 3  value:");
  scanf("%d%d%d",&a,&b,&c);
   if(a>b & a>c )
    printf(" A has greater value:%d",a);
   else if(b>c)
     printf(" B has greater value :%d",b);
   else
     printf(" C has greater value: %d",c);
  getch();
  }