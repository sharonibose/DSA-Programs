//6) Find the sum of all elements present in the array using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter the size of the array to be created: ");
    scanf("%d", &n);

    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (arr + i));             //arr + i + j = (arr + i)[j]
    }

    for(i = 0; i < n; i++)
    {
        sum += *(arr + i);        
    }

    printf("\nSum = %d", sum);

    return 0;
}