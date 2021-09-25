/*1. Store information of a student using structure and dynamic memory allocation
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
    int i;
    struct student *ptr;
    ptr=(struct student *)malloc(1*sizeof(struct student));

    if(ptr==NULL)
    {
    printf("Insufficient memory");
    return 0;
    }

    printf("Enter the roll number ");
    scanf("%d", &(ptr)->roll);
    printf("Enter the name ");
    scanf("%s", (ptr)->name);
    printf("Enter the address ");
    scanf("%s", (ptr)->address);
    printf("Enter the mark 1: ");
    scanf("%d", &(ptr)->mark1);
    printf("Enter the mark 2: ");
    scanf("%d", &(ptr)->mark2);
    printf("Enter the mark 3: ");
    scanf("%d", &(ptr)->mark3);
    
    printf("\nDisplaying the information \n");
    printf("\nRoll Number: %d", (ptr)->roll);
    printf("\nName: %s", (ptr)->name);
    printf("\nAddress: %s", (ptr)->address);
    printf("\nMark 1: %d", (ptr)->mark1);
    printf("\nMark 2: %d", (ptr)->mark2);
    printf("\nMark 3: %d", (ptr)->mark3);
    free(ptr);
    return 0;
}