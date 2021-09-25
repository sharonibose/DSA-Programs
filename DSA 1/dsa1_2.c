//A c program to show the even numbers after the odd numbers after sorting

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter Number of Elements: ");
	scanf("%d", &n);
//	system("clear"); 
	int arr[n], res[n], i, c = 0;
	for(i = 0; i < n; i++)
	{
		printf("Enter Element %d: ", i + 1);
		scanf("%d", &arr[i]); 
	}
	for(i = 0; i < n; i++)
	{
		if(arr[i]%2 == 0)
		{
			res[c++] = arr[i];
		}
	}
	for(i = 0; i < n; i++)
	{
		if(arr[i]%2 != 0)
		{
			res[c++] = arr[i];
		}
	}
	printf("\nOutput Array: ");
	for(i = 0; i < n; i++)
	{
		printf("%d ", res[i]);
	}
	printf("\n");
	return 0;
}