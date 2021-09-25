/*Write a C program to copy all elements from an array to another array*/
#include<stdio.h>
int main()
{
    printf("A C program to copy all elements from an array to another array \n\n");
    int n;
    printf("Enter the number of elements to be entered in the array ");
    scanf("%d",&n);
    
    int i,a[n],copya[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element number %d ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        copya[i]=a[i];
    }

    printf("Elements of original array are \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }

    printf("Elements of copied array are \n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",copya[i]);
    }

    return 0;
}
