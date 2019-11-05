#include<stdio.h>
#include<conio.h>
int main()
{
	int i,no;
	clrscr();
	printf("enter th no:");
	scanf("%d",&no);
	if(no%2==1){
		printf("no is odd");
	}
	else{
		printf("no is even");
	}
getch();
}