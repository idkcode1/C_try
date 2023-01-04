#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE];
int front=0;
int rear=0;

void insert(int);
void delete(void);
void display(void);

void main(){
	int n,ele;
	while(1){
		printf("1)insert\n2)delete\n3)display\n\n");
		scanf("%d",&n);
		switch(n){
		case 1:
				printf("enter element:\n");
				scanf("%d",&ele);
				insert(ele);
				break;
		case 2:
				delete();
				break;
		case 3:
				display();
				break;
		default:
				exit(0);
		}
	}
}

void insert(int ele){
	if(rear==SIZE){
		printf("queue is full\n");
	}
	else{
		queue[rear]=ele;
		rear++;
	}
}

void delete(){
	if(rear==0){
		printf("queue empty\n");
	}
	else{
		printf("%d deleted\n",queue[front]);
		for(int i=0;i<rear-1;i++){
			queue[i]=queue[i+1];
		}
		rear--;
	}
}

void display(){
	if(rear==0){
		printf("queue empty");
	}
	else{
		for (int i=0;i<rear;i++)
		{
			printf("%d",queue[i]);
		}
	}
}