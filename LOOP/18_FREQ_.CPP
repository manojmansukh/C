#include<stdio.h>
#include<conio.h>
# define size 10
int main()
{
 long long  no,n,lastdig;
 int freq[size];
 clrscr();
 printf("enter the no :");
 scanf("%lld",&no);
 n=no;
  for(int i=0;i<size;i++)
  {
  freq[i]=0;
  }
 while(n!=0)
 {
 lastdig=n%10;
 n=n/10;
 freq[lastdig]++;
}
printf("frequency of each digit:\n");
for(i=0;i<size;i++)
{
printf("frequence of %d is %d\n",i,freq[i]);
}
 getch();
 }
