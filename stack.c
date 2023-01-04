#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE];
int top=-1;

void push(int);
int pop(void);
void display(void);
void peek(void);

void main(){
	int n;
	while(1){

	int ele,a;
	printf("enter ur choice 1)PUSH\n 2)POP\n 3)PEEK\n 4)Display(traverse)\n");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
			printf("enter element\n");
			scanf("%d",&a); 
			push(a);
			break;
	case 2: 
			ele=pop();
			printf("element poped: %d",ele);
			break;
	case 3: peek();
			break;
	case 4: display();
			break;
	default: exit(0);

		}

	}
}

void push(int ele){
	if(top==SIZE-1){
		printf("STACK OVERFLOW\n");
	}
	else{
		stack[++top]=ele;
	}
}

int pop(){
	int ele;
	if(top==-1){
		printf("STACK UNDERFLOW\n");
		return 1;
	}
	else{
		return stack[top--];
	}
}

void peek(){
	if(top==-1){
		printf("STACK EMPTY\n");
	}
	else{
		printf("%d\n",stack[top]);
	}
}

void display(){
	if(top==-1){
		printf("STACK EMPTY\n");
	}
	else{
		for(int i=0;i<=top;i++){
			printf("%d\n",stack[i]);
		}
	}
}