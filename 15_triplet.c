#include <stdio.h>

int isTriplet(int ar[], int n)
{
    int x, y, z;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                // Calculate square of array elements
                x = ar[i] * ar[i], y = ar[j] * ar[j], z = ar[k] * ar[k];
                if (x == y + z || y == x + z || z == x + y)
                {
                    printf("%d, %d, %d",ar[i],ar[j],ar[k]);
                    return 1;
                }
            }
        }
    }

    // If we reach here, no triplet found
    return -1;
}

/* Driver program to test above function */
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int result = isTriplet(ar, n);
    if(result == -1)
    {
        printf("no triples found");
    }
    return 0;
}
