#include <stdio.h>
#include <stdlib.h>

//Defining a node 
typedef struct node
{
	int data;
	struct node *next;
}node;

//Functions
node* Insert(int [],int);
void DisplayList(node *);
node* SpiltList(node *);

//Inserting the elements into the linked list 
node* Insert(int a[],int n)   
{ 
	node *head=NULL;
	node *newnode,*temp; //The data is stored in the new node
  	for(int i=0;i<n;i++){  
  		if(head==NULL) 
  		{
  		 	temp=head=(node*)malloc(sizeof(node));
  		 	temp->data=a[i];
  		}else{ 
  			newnode=(node*)malloc(sizeof(node));
  		    newnode->data=a[i];
  		    temp->next=newnode;
  		    temp=newnode;
  	    }
  	}
	temp->next=NULL;   //make the next of last node equal to (NULL)
	return head;       //return the list
}

//Display all the elements present 
void DisplayList(node *head)
{
	if(head==NULL)   //If head is not pointing to any node (NULL) it returns back
	{
		printf("\nList is Empty!\n");
		return;
	}do{
		printf("%d ",head->data); //Till the head reaches NULL it prints all the values
		head=head->next;
	}while(head!=NULL);
	printf("\n");
}

//Function to split the the Linked lists into N/2
node* SplitList(node* head)
{ 
	node *slow,*fast,*temp;
  	slow=fast=head;
  	while(fast->next!=NULL && fast->next->next!=NULL)
  	{						    //Introducing slow and fast pointers to traverse through the list
  		slow=slow->next;
		fast=fast->next->next;
  	}
  	temp=slow->next;
  	slow->next=NULL;
  	return temp;  //After spilting the second list is returned 
}



