#include<stdio.h>
#include<conio.h>
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
  n = sizeof(a)/sizeof(a[0]);

  printf("\n\n enter the search element:");
  scanf("%d",&r);
  for(i=0;i<n-1;i++)
  {
    if(r==a[i])
    {
      printf("number found at %d" ,i);

    }
  }
    if(r != a[i])
    printf("number not found");



  getch();
}