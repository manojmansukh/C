#include<stdio.h>
#include<conio.h>

 int leftrotation(int arr[],int n)
 {
    int i,r,temp=arr[0];
    for(i=0;i<n-1;i++)
     {
       arr[i]=arr[i+1];
     }
       arr[n-1]=temp;
 }

int main()
{
   int arr[]={45,4,46,2};
   int r,n;
   clrscr();
   n=sizeof(arr)/sizeof(arr[0]);
   printf("array element:");
   for(int i=0;i<n;i++)
   printf("%d\t",arr[i]);

   printf("\nenter the no of rotation:");
   scanf("%d",&r);
   for(i=1;i<=r;i++)
   {
     leftrotation(arr,n);
   }

    printf("\ array element after rotatio:");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);


getch();
}
