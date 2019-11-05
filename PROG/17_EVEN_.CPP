#include<stdio.h>
#include<conio.h>

 int reverse(int arr[],int n)
 {
 int i,j=0,k=0,no,even[20],odd[20];

printf("array element:\t");
for(i=0;i<n;i++)
 printf("%d\t",arr[i]);

for(i=0;i<n;i++)
{
if(arr[i]%2==0)
{
even[j++]=arr[i];

}
else
{
odd[k++]=arr[i];
}
}
printf("\neven no array:\t");
for(i=0;i<n;i++)
printf("%d\t",even[i]);

printf("\nodd no array:\t");
for(i=0;i<n;i++)
printf("%d\t",odd[i]);

 }
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
clrscr();

int n=sizeof(arr)/sizeof(arr[0]);
reverse(arr,n);
getch();
}
