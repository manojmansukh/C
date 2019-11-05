

struct node {
    int data;
    struct node *next;
}

#include <stdio.h>
#include <stdlib.h>
  
/* A structure of linked list node */
struct node {
  int data;
  struct node *next;
} *head;
 
void initialize(){
    head = NULL;
}
 
/* 
Given a Inserts a node in front of a singly linked list. 
*/
void insert(int num) {
    /* Create a new Linked List node */
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    /* Next pointer of new node will point to head node of linked list  */
    newNode->next = head;
    /* make new node as new head of linked list */
    head = newNode;
    printf("Inserted Element : %d\n", num);
}
 
 
void insertAfter(struct node* prevNode, int num) { 
    /* Input validation */
    if (prevNode == NULL) { 
       printf("Error : Invalid node pointer !!!\n");       
       return;  
    }  
          
    /* creates a new node */
    struct node* newNode =(struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    /* Set Next pointer of newNode to next pointer of nodePtr */
    newNode->next = prevNode->next;  
    /* Set next pointer of prevNode to newNode */
    prevNode->next = newNode;
}
 
/*
Prints a linked list from head node till tail node 
*/
void printLinkedList(struct node *nodePtr) {
    printf("\nLinked List\n");
  while (nodePtr != NULL) {
     printf("%d", nodePtr->data);
     nodePtr = nodePtr->next;
     if(nodePtr != NULL)
         printf("-->");
  }
}
  
int main() {
    initialize();
    /* Creating a linked List*/
    insert(2);  
    insert(4); 
    insert(5); 
    insert(9);
    printLinkedList(head);
    /* Inserting a node after third node(4) from head */
    insertAfter(head->next->next, 8);
    printf("\n\nAfter Insertion\n");
    printLinkedList(head);
    return 0;
}
