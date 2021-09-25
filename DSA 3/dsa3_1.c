//Enter the information of students using array and display them
#include<stdio.h>
struct stud
{
    int roll, mark1, mark2, mark3;
    char name[30], address[100];
};

int main()
{
    int n, i;
    printf("Enter the number of students for whom the information is to be entered: ");
    scanf("%d", &n);
    struct stud e[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the name of student of student %d: ", i+1);
        scanf("%s", &e[i].name);
        printf("Enter the roll: ");
        scanf("%d", &e[i].roll);
        //getch();
        printf("Enter the address: ");
        scanf("%s", &e[i].address);
        printf("Enter the mark 1 ");
        scanf("%d", &e[i].mark1);
        printf("Enter the mark 2 ");
        scanf("%d", &e[i].mark2);
        printf("Enter the mark 3 ");
        scanf("%d", &e[i].mark3);
    }

    printf("Displaying all the info entered \n");

     for(i=0;i<n;i++)
     {
         printf("Name: %s ", e[i].name);
         printf("\nRoll: %d ", e[i].roll);
         printf("\nAddress: %s ", e[i].address);
         printf("\nMark 1: %d", e[i].mark1);
         printf("\nMark 2: %d", e[i].mark2);
         printf("\nMark 3: %d", e[i].mark3); 
     }

    return 0;
}