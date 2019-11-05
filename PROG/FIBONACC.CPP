#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,fno=0,sno=1,tno=0,pos;
clrscr();
printf("enter the no of position:");
scanf("%d",&pos);

printf("%d\t%d\t",fno,sno);
while(i<=pos)
{
tno=fno+sno;
printf("%d\t",tno);
fno=sno;
sno=tno;
i++;
}
getch();
}

