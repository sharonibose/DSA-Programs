/******************************************************************************
WAP to find the largest number and counts the occurrence of the largest number
in an array of n integers using a single loop. 
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n;
   
    printf("Enter numbers and this program will show you the number of occurrences of the largest \n");
    printf("Enter the number of elements to be compared \n");
    scanf("%d",&n);
    printf("Enter the numbers \n");
    
    int a[n],count=0;
    
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        
    }
    printf("the maximum number is %d \n",max);
    
     for(i=0;i<n;i++)
     {
        	if(a[i] == max)
			count++;
     }
    printf("the number of times the largest number is repeated is %d", count);
    return 0;
}
