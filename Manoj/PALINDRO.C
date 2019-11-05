#include<conio.h>
#include<stdio.h>
#include<string.h>

void ispalindrome(char str[])
{
  int l=0 ;
  int h = strlen(str) - 1;
  clrscr();
  while( h>l)
  {
    if(str[l++] != str[h--])
     {
	printf("string not a palendrome");
     }
  }
   printf("Palindrome",str);
}


   void main ()
   {
   ispalindrome("abcba");
   getch();
   }