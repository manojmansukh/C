#include<stdio.h>
#include<conio.h>

void main()
{
	int temp,i,j,no,arr[50];
	clrscr();

	printf("enter the min no fo compare:");
	scanf("%d",&no);
	printf(	"enter the no:");

	for(i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("no for comparision:");
	for(i=0;i<no;i++)
	{
		printf("\t%d",arr[i]);
	}

	for(i=0;i<no;i++)
	{
	for(j=0;j<no;j++)
	{
	   if(arr[j]<arr[j+1])
	     {
		temp = arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	     }
		}
	}

	printf("\nshorted array by desending order:");
	for(i=0;i<no;i++)
	{

	printf("\t%d",arr[i]);
	 }
getch();
}
