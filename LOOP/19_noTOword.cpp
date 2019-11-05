#include<stdio.h>
#include<conio.h>

int main()
{
	int num=0,no;
	printf("enter the no:");
	scanf("%d",&no);
	while(no!=0)
	{
		num=(num*10)+(no%10);
		no/=10;
	}
	    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        num = num / 10;
    }

    getch();
}
