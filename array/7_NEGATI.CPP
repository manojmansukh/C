#include<stdio.h>
#include<conio.h>

 int negative(int arr[],int n)
 {
 int i,negative=0;
 for(i=0;i<n;i++)
 {
 if(arr[i]<0)
 {
    negative++;
 }
 }
 printf("array element:");
  for(i=0;i<n;i++)
printf("%d\t",arr[i]);
 printf("\ntotal negative element:%d",negative);

 }



int main()
{
int arr[]={-45,4,-46,2};
clrscr();

int n=sizeof(arr)/sizeof(arr[0]);
negative(arr,n);
getch();
}
