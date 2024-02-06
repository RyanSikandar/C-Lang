//write a program in c that takes an array of 12 integers as input. Create a new array and save only the unique elements of input array in the new array and display them.

#include <stdio.h> 
#include<string.h>
#define MAXSIZE 12 

// Function to print unique elements 
void printUnique(int arr[], int size) 
{ 
	int i, j; 
	int newArr[MAXSIZE];
	int newSize = 0;

	// Pick elements one by one 
	for (i = 0; i < size; i++) { 
		// Check if the picked element is 
		// already printed 
		int found = 0; 
		for (j = 0; j < i; j++) 
        { 
			if (arr[i] == arr[j]) { 
				found = 1; 
				break; 
			} 
		} 

		// If not printed earlier, print it 
		if (found == 0){
			newArr[newSize] = arr[i];
			newSize++;
		}
	} 

	// Print unique elements 
	for (i = 0; i < newSize; i++) 
		printf("%d ", newArr[i]); 
} 

// Driver program to test above 
int main() 
{ 
	int arr[12];
    for(int i=0;i<=11;i++)
    {
        scanf("%d",&arr[i]);
    }
	int size = 12;

	printf("Unique elements in an array are: "); 
	printUnique(arr, size); 

	return 0; 
}