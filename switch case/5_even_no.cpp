#include<stdio.h>
#include<conio.h>

int main()
{
	int no;
	printf("enter the no:");
	scanf("%d",&no);
	switch(no%2==0)
	{
		case 0:
			printf("no is even");
			break;
		case 1:
			printf("no is odd");
			break;
	}
}
