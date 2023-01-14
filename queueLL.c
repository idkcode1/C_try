#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}node;
node *front,*rear=NULL;

void enqueue(int val)
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	newnode->data=val;
	newnode->next=NULL;
	if(front==NULL && rear==NULL)
		front=rear=newnode;
	else{
		rear->next=newnode;
		printf("\nValue inserted -> %d\n",rear->data);
		rear=newnode;
	}
}

void dequeue()
{
	node *temp;
	temp=front;
	if(front==NULL)
		printf("\nUnderflow\n");
	else
	{ printf("\nValue deleted -> %d\n",front->data);
	  front=front->next;
	  free(temp);
	}
}
void display()
{
	node *temp;
	temp=front;
	if(front==NULL)
		printf("Empty");
	else
	{
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
    enqueue(2);
    enqueue(-1);
    enqueue(7);
    enqueue(5);
    enqueue(6);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}