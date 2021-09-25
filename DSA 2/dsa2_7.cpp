//7) Write a C program to find the sum of the main diagonal elements of a matrix
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, n;
    printf("Enter the size of square of 2d array:");
    scanf("%d", &n);
    int a[n][n], sum=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter elenent of row %d colunn %d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i)
            {
                sum+=a[i][j];
            }
        }
    }

    printf("The sum is %d", sum);
    return 0;
}