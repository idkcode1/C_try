/* Write a program to insert N employee information into the Linked List. 
a. Write a function to Search an Employee and display his details. 
b. Display the Average salary of all the Employees with designation Manager. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 10
struct Employee{
	char name[10];
	char des[10];
	double salary;
	struct Employee *link;
};

char name[SIZE];
char des[SIZE];
double salary;


struct Employee* insert(struct Employee *head);
void display(struct Employee *head);
void displayMan(struct Employee *head);
void search(struct Employee *head);

//typedef struct Employee Emp;

void main(){
	struct Employee *head;
	head=NULL;
	int i;

	while(1){

		printf("select option\n1)INSERT\n2)DISPLAY avg salary of MANAGER\n3)SEARCH\n4)DISPLAY\n");
		scanf("%d",&i);

		switch(i){
		case 1: 
				head=insert(head);
				break;
		case 2:
				displayMan(head);
				break;
		case 3:
				search(head);
				break;
		case 4:
				display(head);
				break;
		default:
				exit(0);
		}
	}
}

struct Employee* insert(struct Employee *head)
{
	struct Employee	*newNode;
	newNode=(struct Employee*)malloc(sizeof(struct Employee));

	printf("enter name of Employee\n");
	scanf("%s",name);
	printf("enter desgination of Employee(for MANAGER put mng)\n");
	scanf("%s",des);
	printf("enter salary of Employee\n");
	scanf("%d",&salary);

	strcpy(newNode->name,name);
	strcpy(newNode->des,des);
	newNode->salary=salary;
	if(head!=NULL){
		newNode->link=head;
	}
	head=newNode;
	return head;
}
void display(struct Employee *head){
	if(head==NULL){
		printf("List is empty\n");
	}
	while(head!=NULL){
		printf("%s , %s , %d\n",head->name,head->des,head->salary);
		head=head->link;
	}

}
void displayMan(struct Employee *head){
	if(head==NULL){
		printf("List is empty\n");
	}
	int i=0;
	char ch[]="mng";
	double avg=0;
	struct Employee *ptr;
	ptr=(struct Employee*)malloc(sizeof(struct Employee));
	ptr=head;
	while(ptr!=NULL){
		if(strcmp(ptr->des,ch)==0){
			avg=avg+ptr->salary;
			i++;
		}
		ptr=ptr->link;
	}
	avg=avg/i;
	printf("average salary equals = %d\n",avg);
}
void search(struct Employee *head){
	if(head==NULL){
		printf("List is empty\n");
	}
	else{
	struct Employee *ptr;
	ptr=(struct Employee*)malloc(sizeof(struct Employee));
	ptr=head;
	printf("enter Employee name to search\n");
	scanf("%s",name);
	while(ptr!=NULL){
		if(strcmp(ptr->name,name)==0){
			printf("Employee found...\n");
			printf("%s , %s , %d\n",head->name,head->des,head->salary);
			break;
		}
		else{
			printf("Employee not found\n");
		}
		ptr=ptr->link;
	}
}
}
