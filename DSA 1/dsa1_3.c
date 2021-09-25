/*
Write a program to find second largest and second smallest element in an array.
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Size of Array: ");
	scanf("%d", &n);
	printf("\n");
	int arr[n], res[n], i, j, temp;
	for(i = 0; i < n; i++)
	{
		printf("Enter Element %d: ", i + 1);
		scanf("%d", &arr[i]);
		res[i] = arr[i];
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = a[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\nResultant Array:\n\n");
	for(i = 0; i < n; i++)
		printf("%d ", res[i]);
	printf("\n\nSecond Smallest Element: %d\n", arr[1]);
	printf("Second Largest Element: %d\n", arr[n - 1]);
	return 0;
}