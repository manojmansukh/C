
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next; 
};
struct node *head;
void insert(int);
int print();

int main()
{
	int i,no,ch;
	//char ch='y';
	do 
	{
		printf("enter the no:");
		scanf("%d\t",no);
		void insert(no);
		int print();
		printf("if you want to continue press 0:");
		scanf("%d",&ch);
	}while(ch==0);
}

void insert(int no)
{
	struct node * temp=(struct node *)malloc(sizeof(struct node*));
	if(head==NULL)
	printf("overflow");
	else
	temp->data=no;
	temp->next=head;
	head=temp;
}

int print()
{
	struct node * temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

