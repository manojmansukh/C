#include<stdio.h>
#include<conio.h>

 int search(int arr[],int n)
 {
 int i,no,low=0,high=n-1,mid;

 while( low<=high)
{
  mid=(low+high)/2 ;
  if(arr[i]<mid)
  {
    low=mid+1;
  }
  else if (arr[i]>mid)
  {
   high=mid-1;
   }
   else
   {
     return mid;
   }
 } printf("key s not found" );

 }
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
clrscr();
int n=sizeof(arr)/sizeof(arr[0]);
int no;

printf("array element:\t");
for(int i=0;i<n;i++)
 printf("%d\t",arr[i]);
 printf("enter the element for searvch:");
 scanf("%d",&no);
 search(arr,n);
 printf("no found at position %d:",i);
getch();
}
