 #include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
int i=1, fir=0,sec=1,next=0,no;
printf("enter the no of element:");
scanf("%d",&no);
printf("%d\t%d\t",fir,sec);
while(i<=no)
{
next=fir+sec;
printf("%d\t",next);
fir=sec;
sec=next;
i++;
}


getch();
}
