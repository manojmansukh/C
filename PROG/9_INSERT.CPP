#include<stdio.h>
#include<conio.h>

 int insert(int arr[],int n)
 {
 int i,pos,no ;

printf("array element:");
for(i=0;i<n;i++)
 printf("%d\t",arr[i]);

printf("\nenter the element for insert:");
scanf("%d",&no);

printf("\nenter the position:") ;
scanf("%d",&pos);

for(i=n;i>=pos;i--)
   arr[i]=arr[i-1];

arr[pos-1]=no;
n++;

printf("array element:");
for(i=0;i<n;i++)
 printf("%d\t",arr[i]);

 }



int main()
{
int arr[]={45,4,46,2};
clrscr();

int n=sizeof(arr)/sizeof(arr[0]);
insert(arr,n);
getch();
}
