#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert(int);
void print();

struct node 
{
	int data;
	struct node * next;
}*temp,*ptr;
 struct node * head;
 void insert(int no)
 {
 ptr=(struct node*)malloc(sizeof(struct node *));
	 if(ptr==NULL)
	 {
	 	printf("OVERFLOW");
	  }
	  else
	  {
	  	ptr->data=no;
	  	if(head==NULL)
	  	{
	  		ptr->next=head;
	  		head=ptr;
	 	}
		else
	  	{
		    temp=head;
	  		while(temp->next!=NULL)
	  		{
	  		temp=temp->next;
			}
		  	temp->next=ptr;
		  	ptr->next=NULL;
	   	}
	}
 }
 
 void print()
 {
 
  temp=head;
 	while(temp!=NULL)
 	{
 		printf("%d\t",temp->data);
 		temp=temp->next;
	 }
	 printf("\n");
 }
 int main()
 {
 	int i,no,ch;
 	
 	do
 	{
 		printf("enter the no:");
 		scanf("%d",&no);
 		insert(no);
 		print();
 		printf("enter the 0 for continue:");
 		scanf("%d",&ch);
	 }while(ch==0);
 }
