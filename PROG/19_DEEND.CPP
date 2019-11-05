#include<stdio.h>
#include<conio.h>

int desending(int arr[], int n)
{
 int i,j,temp;
 for(i=0;i<n;i++)
  {
     for(j=i+1;j<n;j++)
    {
      if(arr[i]<arr[j])
	{
	 temp=arr[i];
	 arr[i]=arr[j];
	 arr[j]=temp;
	 }
      }
   }
}
int main()
{
 int arr[]={23,45,2,12,44,88} ;
 clrscr();
 int n= sizeof(arr)/sizeof(arr[0]);
 desending(arr,n);
  printf("\narray elementin desending order:");
 for(int i=0;i<n;i++){
 printf("\%d\t",arr[i]);
 }
 getch();
 }