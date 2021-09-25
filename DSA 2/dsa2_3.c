/*Write a C program to put even and odd elements of array in two separate array*/
#include<stdio.h>
int main()
{
    printf("Write a C program to put even and odd elements of array in two separate array \n\n");

    int n;
    printf("Enter the number of elements to be entered for sorting \n");
    scanf("%d",&n);
    
    int i, a[n], count1=0, count2=0, e[i], o[i];
    for(i=0;i<n;i++)
    {
        printf("Enter element number %d \n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if (a[i]% 2==0)
           e[count1++]=a[i];
       else
           o[count2++]=a[i];
    }
    
    for(i=0;i<=count1;i++)
    {
        printf("Even number: %d\n",i+1);
    }

    
    for(i=0;i<=count2;i++)
    {
        printf("Odd number: %d\n",i+1);
    }
    return 0;
}
