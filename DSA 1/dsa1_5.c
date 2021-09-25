/*
Write a program to find prime numbers in an array and store it in another array using dynamic memory allocation
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, *arr1, *arr2, temp[n], flag;
    printf("Enter the number of numbers that will be enetered for checking for prime numbers: ");
    scanf("%d", &n);
    arr1=(int *)malloc(n*sizeof(int));

    if(arr1==NULL)
    {
        printf("Insufficient Memory");
    }

    for(i=0;i<n;i++)
    {
        printf("Enter element number %d: ", i+1);
        scanf("%d", arr1+i);
    }

    for(i=0;i*i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
        if (flag==0)
     {
        for(i=0;i<n;i++)
        {
            temp[i]=arr1[i];
        }
     }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",temp[i]);
    }
    return 0;
}