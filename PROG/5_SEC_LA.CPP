#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
 int i,n,first,sec,a[10];

  clrscr();
  printf("enter the no of values:");
  scanf("%d",&n);

  printf("\nenter the values:\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("value of array:\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);

  first=sec=INT_MIN;
  for(i=0;i<n;i++)
  {
    if(a[i]>first)
    {
     sec=first;
     first=a[i];
     }
     else if(a[i]>sec && a[i]!=first)
      sec=a[i];
    }
     printf("\nfirst largest element:%d",first
     );

     if(sec==INT_MIN)
     printf("\nthere is no sec larger element");
     else
     printf("\nseec largest element:%d",sec);



  getch();
  }
