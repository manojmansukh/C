#include<stdio.h>
#include<conio.h>

 int ascending(int arr[],int n)
 {
 int i,j,temp;
 for(i=0;i<n;i++)
 { for(j=i+1;j<n;j++)
 {
 if (arr[i]>arr[j])
 {
 temp=arr[i];
 arr[i]=arr[j];
 arr[j]=temp;
 }
 }
 }
printf("asending order array element:");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
 }

int main()
{
int arr[]={45,4,46,2};
clrscr();

int n=sizeof(arr)/sizeof(arr[0]);
ascending(arr,n);

getch();
}
