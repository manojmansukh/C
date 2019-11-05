#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,n,first,sec,a[10],fre[10],count,dublicate=0;

  clrscr();
  printf("enter the no of values:");
  scanf("%d",&n);

  printf("\nenter the values:\n");
  for(i=0;i<n;i++)
{  scanf("%d",&a[i]);
   fre[i]=-1;
 }
  printf("value of array:\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);

 // printf("%d\t",fre[i]);
  for(i=0;i<n;i++)
   { count =1;
   for(j=i+1;j<n;j++)
     {
     if(a[i]==a[j])
       {
       count++;
       fre[j]=0;
       dublicate++;
       }
    }
    if(fre[i]!=0)
      fre[i]=count;
  }

     // fre[i]=count;
       printf("\ndublicate value in arry is:%d",dublicate);
     // for(i=0;i<n;i++)
      //if(fre[i]>1)
     // printf("\n frequency of %d is %d times.",a[i],fre[i]);

  getch();
  }
