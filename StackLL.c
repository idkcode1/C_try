#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}node;
node *top=NULL;

void push(int val)
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("\n%d is pushed to stack\n",val);
	newnode->data=val;
	newnode->next=top;
	top=newnode;
}

void pop()
{
	node *temp;
	temp=top;
	if(top==NULL)
		printf("\nStack Underflow\n");
	else
	{ printf("\n%d is popped from stack\n",temp->data);
	  top=top->next;
	  free(temp);
	}
}

void display()
{
	node *temp;
	temp=top;
	if(top==NULL)
		printf("\nStack Empty\n");
	else
	{ printf("\nElements in stack\n");
		while(temp!=NULL)
		{ printf("%d\n",temp->data);
		  temp=temp->next;
		}
	}
}
void peek()
{
	node *temp;
	temp=top;
	if(top==NULL)
		printf("\nEmpty!\n");
	else
	{
		printf("\nTop Element in stack -> %d\n",temp->data);
	}
}

int main()
{
	push(2);
	push(3);
	display();
	peek();
	pop();
	peek();
	pop();
	peek();
	return 0;
}