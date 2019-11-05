#include<stdio.h>
#include<conio.h>

int main()
{
	int ch;
	printf("enter the week no:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thusday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;
		case 7:
			printf("sunday");
			break;
		
	}
	
}
