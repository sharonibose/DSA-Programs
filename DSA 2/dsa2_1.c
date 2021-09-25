/*Write a C program to count total number of negative elements in an array.*/
#include<stdio.h>
int main()
{
    printf(" A C program to count total number of negative elements in an array\n \n");

    int n;
    printf("Enter the number of elements to be entered ");
    scanf("%d",&n);
-
    int a[n],c=0,i;
    for(i=0;i<n;i++)
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0) 
        
            c++;
        
    }

    printf("The count of negative numbers is %d",c);
    return 0;
}
