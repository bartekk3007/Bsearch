#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	int wartA = *(int*)a;
	int wartB = *(int*)b;
	if (wartA > wartB)
	{
		return 1;
	}
	else if (wartA < wartB)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int arr[] = { 75, 50, 12, 37, 62, 25 };
	qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);

	int key = 62;
	int* item;
	item = bsearch(&key, arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), compare);

	if (item == NULL)
	{
		printf("Nie znaleziono elementu\n");
	}
	else
	{
		printf("Znaleziono element %d\n", *item);
	}

	return 0;
}