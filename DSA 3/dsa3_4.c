/*1. Store information of 'n' students using structure and dynamic memory allocation
Information to be stored:
Roll number
Name
Address 
Mark 1
Mark 2
Mark 3
*/
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int roll, mark1, mark2, mark3;
    char name[30], address[150];
};
int main()
{
    int i,n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct student *ptr;
    ptr=(struct student *)malloc(n*sizeof(struct student));

    if(ptr==NULL)
    {
    printf("Insufficient memory");
    return 0;
    }
    for(i=0;i<n;i++)
    {
        printf("Enter the roll number ");
        scanf("%d", &(ptr+i)->roll);
        getchar();
        printf("Enter the name ");
        scanf("%[^\n]s", (ptr+i)->name);
        getchar();
        printf("Enter the address ");
        scanf("%[^\n]s", (ptr+i)->address);
        printf("Enter the mark 1: ");
        scanf("%d", &(ptr+i)->mark1);
        printf("Enter the mark 2: ");
        scanf("%d", &(ptr+i)->mark2);
        printf("Enter the mark 3: ");
        scanf("%d", &(ptr+i)->mark3);
    }
    
    printf("\nDisplaying the information \n");
    
    for(i=0;i<n;i++)
    {
         printf("\nRoll Number: %d", (ptr+i)->roll);
         printf("\nName: %s", (ptr+i)->name);
         printf("\nAddress: %s", (ptr+i)->address);
         printf("\nMark 1: %d", (ptr+i)->mark1);
         printf("\nMark 2: %d", (ptr+i)->mark2);
         printf("\nMark 3: %d", (ptr+i)->mark3);
    }
    free(ptr);
    return 0;
}