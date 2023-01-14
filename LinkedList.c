/*NAME: Akshay M Acharya
REG. NO: 221039012
	DSA LAB EXAM*/
/*Q> */
#include "header.h"

//Driver code
int main(void)
{
	int n;
	printf("\n*******SPLIT THE LINKED LIST INTO N/2*********\n");
	printf("ENTER HOW MANY ELEMENTS YOU WANT TO INSERT: ");
	scanf("%d",&n);
	int a[n];
	printf("ENTER THE %d VALUES: ",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	node *head = Insert(a,n); //Passing the array and the number of elements to insert function
	printf("ORIGINAL LIST(BEFORE SPLIT):\n");
	DisplayList(head); //Display function is used to print the elements present in the linked list
	node *sechalf=SplitList(head); //Spilt function is used to split the linked list to N/2
	printf("**AFTER SPLIT**\n");
	printf("FIRST HALF:\n");  //Displaying first and second half
	DisplayList(head);
	printf("SECOND HALF:\n");
	DisplayList(sechalf);
	printf("***********************************************\n");
	return 0;
}
