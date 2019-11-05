#include<stdio.h>
#include<conio.h>
int main()
{
int no1,no2,ch=0,add,div,mul,sub;
char m = 'Y';
clrscr();
while(m=='Y')
{
printf("\n enter the two no=");
scanf("%d%d",&no1,&no2);
printf("1.Addition\n2.Substraction\n3.Multiplication\n4.division\n");
printf("enter the choice =");
scanf("%d",&ch) ;
switch(ch)
{
case 1:
add=no1+no2;
printf("Add of no=%d",add);
break;

case 2:
sub=no1-no2;
printf("sub of no=%d",sub);
break;

case 3:
mul=no1*no2;
printf("Mul of no=%d",mul);
break;

case 4:
div=no1/no2;
printf("div of no=%d",div);
break;


 }
printf("\nif you want to contiue Y/N =");
m=getch();
}
getch();
}