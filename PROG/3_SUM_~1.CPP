#include <stdio.h>
#include<conio.h>
#define size 1000
   
   int addarray(int arr[], int start, int len);

   int main()
   {
		int i ,sum,arr[size],n;
		printf("enter the no of array element:");
		scanf("%d",&n);

		printf("enter the array element:");
		for(i=0;i<n;i++)
		scanf("%d\t",&arr[i]);


		sum=addarray(arr,0,n);
		printf("sum of array:%d",sum);


	  getch();
	}

int addarray(int arr[],int start, int len)
{
	int sum=0;
	if(start>=len)
	return 0;
		return(arr[start]+addarray(arr,start+1,len));


}

	
