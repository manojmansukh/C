#include<stdio.h>
#include<conio.h>

void rotation(int a[],int n)
{
 int temp =a[0],i;
 for(i=0;i<n-1;i++)
 a[i]=a[i+1];
 a[i]=temp;
 }
void main()
{
 int i,j,n,r,m,a[10];
  int temp =a[0];
  clrscr();
  printf("enter the no of values:");
  scanf("%d",&n);

  printf("\nenter the values:\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("value of array:\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);

  printf("\n\n enter the no for bit rotation:");
  scanf("%d",&r);
  for(i=0;i<r;i++)
  {
   rotation(a,n);
  }
  for (i=0;i<n;i++)
  printf("%d\t",a[i]);
  getch();
}