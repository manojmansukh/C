#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert(int data,int n);
//void random(int);
void print();

struct node
{
	int data;
	struct node *next;
}*head,*ptr,*temp;

int main()
{
	int i,no,ch;
	do
	{
		printf("enter the no:");
		scanf("%d",&no);
		if(head==NULL)
		{
		insert(no);
		print();
		}
		else
		{
		random(no);
		print();
		}	
		printf("enter the 0 for continue:");
		scanf("%d",&ch);
	}while(ch==0);
}
void insert(int no)
{
	ptr=(struct node *)malloc(sizeof(struct node *));
	if(ptr==NULL)
	printf("overflow");
	else
	ptr->data=no;
	ptr->next=head;
	head=ptr;
		
}
/*
void random(int no)
{
	int loc;
	ptr =(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	printf("OverFlow");
	else
	printf("enter the location:");
	scanf("%d",&loc);
	ptr->data=no;
	temp=head;
	for(int i=0;i<loc;i++)
	{
		temp=temp->next;
		if(temp==NULL)
		{
			printf("no Cant Insert.");
			return;
	}
		ptr ->next = temp ->next;   
            temp ->next = ptr;   
            printf("\nNode inserted");
            
	}
}*/
void print()
{
	struct node * temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

