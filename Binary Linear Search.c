/*14. Write a program to search an element from the array using following Searching
Techniques:
a. Linear Search
b. Binary Search*/

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) 
{
  	// Repeat until the pointers low and high meet each other
  	while (low <= high) 
  	{
    	int mid = low + (high - low) / 2;

    	if (array[mid] == x)
      		return mid;

    	if (array[mid] < x)
      		low = mid + 1;

    	else
      		high = mid - 1;
  	}
	return -1;
}

int linearSearch(int array[], int search, int n)
{
	for(int i = 0; i < n; i++)
	{
		if(array[i] == search)
			return i;
	}
	return -1;
}

int main(void) 
{

	int array[] = {3, 4, 5, 6, 7, 8, 9};
  	int n = sizeof(array) / sizeof(array[0]);
  	int x = 4;
  	
  	//binary search
  	int result = binarySearch(array, x, 0, n - 1);	
  	printf("\nResult Using binarySearch: ");
  	if (result == -1)
    	printf("\nElement not found");
  	else
   	 	printf("\nElement is found at index %d", result);

   	//linear search
   	int result = linearSearch(array, x, n);
   	printf("\nResult using linearSearch: ");
   	if(result == -1)
   		printf("\nElement not present");
   	else
   		printf("\nElement found at %d", result);
  	return 0;
}



