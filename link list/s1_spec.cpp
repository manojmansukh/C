#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert(int no);
void random(int no,int n);
void print();

struct node
{
	int data;
	struct node *next;
}*head,*ptr,*temp;

int main()
{
	int i,no,ch,n;
	do
	{
		printf("enter the no:");
		scanf("%d",&no);
		if (head==NULL)
		{
		insert(no);
		print();
		}
		else{
		random(no,n);
		print();
	}
		printf("enter the 0 for continue:");
		scanf("%d",&ch);
	}while(ch==0);
}

void insert(int no)
{
		ptr=(struct node *)malloc(sizeof(struct node *));
		ptr->data=no;
		ptr->next=head;
		head=ptr;
		return;
}

void random(int no,int n)
{
	
	ptr=(struct node *)malloc(sizeof(struct node *));
	printf("enter the location:");
	scanf("%d",&n);
	ptr->data=no;
	//ptr->next=NULL;
	ptr->next=head;
		head=ptr;
	/*if(n==1)
	{
		ptr->next=head;
		head=ptr;
		return;
	}*/
	temp=head;
	for(int i=0;i<n;i++)
	{
		temp=temp->next;
	}
	ptr->next=temp->next;
	temp->next=ptr;
	return;
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

