// C program to implement insert operation in
// an sorted array.
#include <stdio.h>

// Inserts a key in arr[] of given capacity. n is current
// size of arr[]. This function returns n+1 if insertion
// is successful, else n.
int insertSorted(int arr[], int n, int key, int capacity)
{
	// Cannot insert more elements if n is already
	// more than or equal to capacity
	if (n >= capacity)
		return n;

	int i;
	for (i = n - 1; (i >= 0 && arr[i] > key); i--)
		arr[i + 1] = arr[i];

	arr[i + 1] = key;

	return (n + 1);
}

/* Driver program to test above function */
int main()
{
	
	int num[20];
   int i, j, a, n,key;
   
   printf("enter number of elements in an array\n");
   scanf("%d", &n);
   printf("Enter the elements\n");
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   int capacity = sizeof(num) / sizeof(num[0]);

   printf("enter number you want to insert: \n");
   scanf("%d", &key);

	printf("\nBefore Insertion: ");
	for (int i = 0; i < n; i++)
		printf("%d ", num[i]);

	// Inserting key
	n = insertSorted(num, n, key, capacity);

	printf("\nAfter Insertion: ");
	for (int i = 0; i < n; i++)
		printf("%d ", num[i]);

	return 0;
}
