#include<stdio.h> 
#include<stdlib.h> 
struct node
{
	int data;
	struct node *next;
};
void createList(struct node **start, int n)
{
	int i; 
	for(i = 0; i < n; i++)
	{
		struct node *new = (struct node *)malloc(sizeof(struct node)); 
		struct node *temp;
		printf("Enter the Data: "); 
		scanf("%d", &new->data); 
		new->next = NULL; 
		if(*start == NULL)
			temp = *start = new; 
		else
		{
			temp->next = new; 
			temp = new;		
		}
	}
}
void displayList(struct node **start)
{
	struct node *temp = *start; 
	printf("\nList: "); 
	while(temp != NULL)
	{
		printf("%d ", temp->data); 
		temp = temp->next;
	}
	printf("\n");
}
int main()
{
	struct node *start = NULL;
	int n, choice;
	while(1)
	{
		printf("1. Create List\n");
		printf("2. Display List\n");
		printf("3. Exit\n\n");
		printf("Enter Your Choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter Number of Terms: ");
				scanf("%d", &n);
				printf("\n");
				createList(&start, n);
				break;
			case 2:
				displayList(&start);
				break;
			case 3:
				exit(0);
		}
		printf("\n");
	}
	return 0;
}