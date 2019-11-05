#include<stdio.h>
#include<conio.h>
int main()
{
 char ch;
 clrscr();
 printf("enter the char:");
 scanf("%c",&ch);
if((ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u') &&
   (ch=='A' || ch=='E'||ch=='I'||ch=='O'||ch=='U'))
 {
    printf("%c is an vowel",ch);
 }
 else
 printf(" %c is an consonant",ch);
 getch();
 }