#include<stdio.h>
#include<stdlib.h>  
#include<conio.h>

void beginsert(int);
void print();
struct node
{
	int data;
	struct node * next;
};
struct node *head;

int main()
{
	int no,i,ch,n;
		printf("how many no:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter the no :");
			scanf("%d",&no);
			beginsert(no);  
			print();
		}

}
	void beginsert(int no)
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node*));
		if(temp==NULL)
		{
			printf("overflow");
		}
		else
		{
			temp->data=no;
			temp->next=head;
			head=temp;
			printf("\n node inserted:\t");
		}	
}
	void print()
	{
		struct node *temp=head;
	
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("\n");
	
	}



