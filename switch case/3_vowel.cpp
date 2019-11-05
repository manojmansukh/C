#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	printf("enter the character:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is vowel",ch);
			break;
		default:
			printf("%c is consonant",ch);
			break;
	}
}
