#include<stdio.h>
#include<conio.h>

void main()
{
 int i,n,a[10],min,max;

  clrscr();
  printf("enter the no of values:");
  scanf("%d",&n);

  printf("\nenter the values:\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("value of array:\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);

  min=a[0];
  max=a[0];

  for(i=1;i<n;i++)
  {
  if(a[i]>max)
  max=a[i];
  if(a[i]<min)
  min=a[i];
  }
  printf("maxi element:%d",max);
  printf("min element:%d",min);

  getch();
  }