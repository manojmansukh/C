#include<stdio.h>
#include<conio.h>

int main()
{
	int no;
	printf("enter the no:");
	scanf("%d",&no);
	switch(no> 0)
	{
		case 1:
			printf("no is positive",no);
			break;
		case 0:
			 switch (no < 0)
            {
                case 1: 
                    printf("%d is negative.", no);
                    break;
                case 0:
                    printf("%d is zero.", no);
                    break;
            }
        break;
	}
}
