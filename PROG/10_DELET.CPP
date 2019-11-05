#include<stdio.h>
#include<conio.h>
 int delete1(int arr[],int n)
 {
 int i,pos;

printf("array element:");
for(i=0;i<n;i++)
 printf("%d\t",arr[i]);

printf("\nenter the position to delte element:") ;
scanf("%d",&pos);
if(pos<=0 || pos>n)
printf("invalid element pos");
else
{
for(i=pos-1;i<n;i++)
   arr[i]=arr[i+1];
   n--;

printf("array element:");
for(i=0;i<n;i++)
 printf("%d\t",arr[i]);

 }
}


int main()
{
int arr[]={45,87,90,78,67,4};
clrscr();

int n=sizeof(arr)/sizeof(arr[0]);
delete1(arr,n);
getch();
}
