//implementing stack using Linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};

struct node* top=NULL;
void push(int);
void pop(void);
void display(void);

void main(){
	int n,ele;
	while(1){
		
		printf("1)push\n 2)pop\n 3)display");
		scanf("%d",&n);
		switch(n){
		case 1:
				printf("enter element\n");
				scanf("%d",&ele);
				push(ele);
				break;
		case 2:
				pop();
				break;
		case 3:
				display();
				break;
		default:
				exit(0);
		}
	}
}

void push(int ele){
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=ele;
	temp->link=top;
	top=temp;
}

void pop(){
	struct node* temp;
	temp=top;
	if(temp==NULL){
		printf("stack empty\n");
	}
	else{
		printf("element popped = %d\n",temp->data);
		top=temp->link;
		free(temp);
	}
}

void display(){
	struct node* temp;
	temp=top;
	if(temp==NULL){
		printf("stack empty\n");
	}
	else{
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
}
