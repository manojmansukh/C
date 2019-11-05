#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void first(int);
void mid(int,int);
void last(int);
void print();

struct node
{
	int data;
	struct node*next;
}*head,*temp,*ptr;

void first(int n)
{
	ptr=(struct node *)malloc(sizeof(struct node *));
	if(ptr==NULL)
	printf("OverFlow");
	else
	{
		ptr->data=n;
		ptr->next=head;
		head=ptr;
	}
}

void last(int n)
{
	ptr=(struct node *)malloc(sizeof(struct node *));
	if(ptr==NULL)
	printf("OverFlow");
	else
	{
		temp=head;
		ptr->data=n;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=ptr;
		ptr->next=NULL;
	}
}

void mid(int n,int pos)
{
	ptr=(struct node *)malloc(sizeof(struct node *));
	
	printf("\n enter the position:");
	scanf("%d",&pos);
	if(pos==1)
	{
		first(n);
		print();
	}
	else
	{
		temp=head;
		ptr->data=n;
		for(int i=2;i<pos;i++)
		{
			temp=temp->next;
		}
		ptr->next=temp->next;
		temp->next=ptr;
	}
	
	
}

void print()
{
	temp=head;
	while (temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}printf("\n");
}
int main()
{
	int i,n,ch,choice,pos;
	do
	{
		printf("\nenter te no :");
		scanf("%d",&n);
		
		if(head==NULL)
		{
			ptr=(struct node*)malloc(sizeof(struct node *));
			ptr->data=n;
			ptr->next=head;
			head=ptr;
			print();
		}
		else
		{
			printf("enter the choice");
			printf("\n\t1.no addd at first pos.\n\t2.no add at last pos.\n\t3.no add before\after pos.");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					first(n);
					print();
					break;
				case 2:
					last(n);
					print();
					break;
				case 3:
					mid(n,pos);
					print();
					break;

			}
		}
		printf("press 0 if you want to continue.");
		scanf("%d",&choice);
	}while(choice==0);
}
