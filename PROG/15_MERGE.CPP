#include<stdio.h>
#include<conio.h>

 int merge(int arr1[],int n,int arr2[],int m,int arr3[])
 {
 int i=0,j=0,k=0;

 while(i<n && j<m)
 {
	if(arr1[i]<arr2[j])
	arr3[k++]= arr1[i++] ;
	else
	 arr3[k++]= arr2[j++];
  }
  while(i<n)
   arr3[k++]=arr1[i++];
  while(j<m)
  arr3[k++]=arr2[j++];


printf("first array element:");
for(i=0;i<n;i++)
 printf("%d\t",arr1[i]);

  printf("\nsec array element:");
for(i=0;i<m;i++)
 printf("%d\t",arr2[i]);

 printf("\nthird array element:");
for(i=0;i<n;i++)
 printf("%d\t",arr3[i]);


 }



int main()
{
int arr1[]={45,44,46,222};
int n=sizeof(arr1)/sizeof(arr1[0]);
int arr2[]={56,67,87,45};
int m=sizeof(arr2)/sizeof(arr2[0]);
int arr3[n+m];
clrscr();

merge(arr1,n,arr2,m,arr3);
getch();
}
