#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create(int);
void print();
void begidelete();
void lastdelete();
void specidelete();
struct node
{
	int data;
	struct node*next;
}*head,*temp,*ptr;

void create(int no)
{
	printf("enter the no:");
	scanf("%d",&no);
	ptr=(struct node *)malloc(sizeof(struct node *));
	if(ptr==NULL)
	printf("list is empty.");
	else
	ptr->data=no;
	ptr->next=head;
	head=ptr;
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

void begidelete()
{
	if(head==NULL)
	printf("list is empty.");
	else
	ptr=head;
	head=ptr->next;
	free(ptr);
	printf("\n Node deleted from the begining ...\n");  
}

void lastdelete()
{
	ptr=head;
	temp=NULL;
	while(ptr->next!=NULL)
	{
		temp=ptr;
		ptr=ptr->next;
	}
	free(ptr);
	temp->next=NULL;
}

void specidelete()
{
	ptr=head;
	temp=NULL;
	int pos;
	printf("enter the position:");
	scanf("%d",&pos);
	if(pos==1)
	{
		begidelete();
	}
	else
	{
	for(int i=1;i<pos;i++)
	{
		temp=ptr;
		ptr=ptr->next;
	}
	temp->next=ptr->next;
	free(ptr);	
	}
}

int main()
{
	int no,ch;
	
	do
	{
	printf("\n1.append node.\n2.print node.\n3.begin node delete\n4.last node delete\n5.specific node delete.\n6.exit.\n");
		printf("enter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create(no);
				print();
				break;
			case 2:	
				print();
				break;
			case 3:
				begidelete();
				break;
			case 4:
				lastdelete();
				break;
			case 5:
				specidelete();
				break;
			case 6:
				exit(0);  
				break;
			
			default:
				printf("\nenter correct choice:");	
		}
	}while(ch!=6);
}
