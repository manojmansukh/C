#include<stdio.h>
#include<conio.h>

 int evenodd(int arr[],int n)
 {
 int i,even=0,odd=0;
 for(i=0;i<n;i++)
 {
 if(arr[i]%2==0)
 {
    even++;
 }
 else
 {
  odd++;
 }
 }

// printf("array element:%d",arr[i]);
 printf("\ntotal even element:%d",even);
 printf("\ntotal odd element:%d",odd);

 }



int main()
{
int arr[]={45,4,46,2};
clrscr();

int n=sizeof(arr)/sizeof(arr[0]);
evenodd(arr,n);
getch();
}
