#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;
void begin(int);
void last(int);
void mid(int,int);
void print();

void begin(int n)
{
	struct node * temp=(struct node*)malloc(sizeof(struct node*));
	if(temp==NULL)
	printf("overflow");
	else
	temp->data=n;
	temp->next=head;
	head=temp;
}

void print()
{
	struct node * temp=head;
	while(temp!=NULL)
	{
	printf("%d",temp->data);
	}printf("\n");
}

int main()
{
	int i,ch=0,n;
	do 
	{
		printf("\nenter the no:");
		scanf("%d",&n);
		begin(n);
		print();
		printf("if you want to to continue press 0");
		scanf("%d",&ch);
	}while(ch==0);
}

