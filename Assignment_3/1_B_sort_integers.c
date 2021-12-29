// C program to sort the array in an
// ascending order using sort

#include <stdio.h>

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

// Function to perform Sorting
void sort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++) {

		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		// Swap the found minimum element
		// with the first element
		swap(&arr[min_idx], &arr[i]);
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver code
int main()
{
	 int arr[100], i, n;

 printf("Enter n:\n");
 scanf("%d", &n);
 
 /* Reading array */
 for(i=0;i< n;i++)
 {
  printf("arr[%d]=",i);
  scanf("%d", &arr[i]);
 }
	printf("Original array: \n");
	printArray(arr, n);

	sort(arr, n);
	printf("\nSorted array in Ascending order: \n");
	printArray(arr, n);

	return 0;
}
