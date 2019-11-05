#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	node * next;
};
struct node * head;
int insert(int x);
int print();

int insert(int x)
{
	struct node * temp=(struct node*)malloc(sizeof(struct node*));
	if(temp==NULL)
		printf("overflow");
	else
		temp->data=x;
		temp->next=head ;
		head=temp;
}
int print()
{
	struct node * temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	int i,no,x;
	printf("how many no:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("enter the no:");
		scanf("%d",&x);
	    insert(x);
		print();
	}
	getch();
}

