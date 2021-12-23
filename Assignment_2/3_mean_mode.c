#include <stdio.h>
#include <math.h>
#define MAXSIZE 10

void getmode(float a[],int n){
     int i, j,  sum = 0, t, b[20] = {0}, k = 0, c = 1, max = 0, mode;
    float x = 0.0, y = 0.0;
    
    for (i = 0; i < n - 1; i++)
    {
        mode = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j]) {
                mode++;
            }
        }
        if ((mode > max) && (mode != 0)) {
            k = 0;
            max = mode;
            b[k] = a[i];
            k++;
        }
        else if (mode == max) {
            b[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == b[i]) 
            c++;
        }
        if (c == n)
            printf("\nThere is no mode");
        else
        {
            printf("\nMode\t= ");
            for (i = 0; i < k; i++)
                printf("%d ",b[i]);
        }
        printf("\n");
}
 
int main()
{
    float x[MAXSIZE];
    int  i, n;
    float average, variance, std_deviation, sum = 0, sum1 = 0;
 
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    /*  Compute the sum of all elements */
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    average = sum / (float)n;
    /*  Compute  variance  and standard deviation  */
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((x[i] - average), 2);
    }
    variance = sum1 / (float)n;
    std_deviation = sqrt(variance);
    printf("Average of all elements = %.2f\n", average);
    getmode(x,n);
    printf("Standard deviation = %.2f\n", std_deviation);
    
    return 0;
}