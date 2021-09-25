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
void insertBeginning(struct node **start, int element)
{	
	struct node *new = malloc(sizeof(struct node)); 
	new->data = element;
	new->next = *start;
	*start = new;
}
void insertEnd(struct node **start, int element)
{
	struct node *new = malloc(sizeof(struct node)); 
	struct node *temp;
	temp =* start;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	new->data = element; 
	temp->next = new; 
	new->next = NULL;
}
void insertPosition(struct node **start, int element, int position)
{
	struct node *new = malloc(sizeof(struct node)); 
	struct node *temp;
	temp = *start; 
	int i; 
	if(position == 1)
	{
		new->data = element; 
		new->next = *start;
		*start = new;
	}
	for(i = 1; i < position - 1; i++)
		temp = temp->next;
	new->data = element;
	new->next = temp->next; 
	temp->next = new;
}
int main()
{
	struct node *start = NULL;
	int n, element, position, choice;
	while(1)
	{
		printf("1. Create List\n");
		printf("2. Display List\n");
		printf("3. Insert Node At Beginning\n");
		printf("4. Insert Node At End\n");
		printf("5. Insert Node At Given Position\n");
		printf("6. Exit\n\n");
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
				printf("\nEnter Element To Add: ");
				scanf("%d", &element);
				insertBeginning(&start, element);
				displayList(&start);
				break;
			case 4:
				printf("\nEnter Element To Add: ");
				scanf("%d", &element);
				insertEnd(&start, element);
				displayList(&start);
				break;
			case 5:
				printf("\nEnter Element To Add: ");
				scanf("%d", &element);
				printf("Enter the Position: ");
				scanf("%d", &position);
				insertPosition(&start, element, position);
				displayList(&start);
				break;
			case 6:
				exit(0);
		}
		printf("\n");
	}
	return 0;
}