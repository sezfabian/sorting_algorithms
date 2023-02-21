#include "sort.h"

/*helper funcs()*/
void sort_alg(int *arr, int left, int right, size_t size);
int split(int *arr, int left, int right, size_t size);

/**
  * quick_sort - sorts array using the quicksort algorithm
  * @array: array to be sorted
  * @size: size of array
  */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	sort_alg(array, 0, size - 1, size);
}

/**
  * sort_alg - sorts array ecursively
  * @arr: array
  * @low: leftmost index
  * @high: rightmost index
  * @size: size of array
  */

void sort_alg(int *arr, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = split(arr, low, high, size);
		sort_alg(arr, low, pivot - 1, size);
		sort_alg(arr, pivot + 1, high, size);
	}
}

/**
  * split - splits array
  * @arr: array
  * @low: leftmost index
  * @high: rightmost index
  * @size: full array size
  * Return: pivot index
  */

int split(int *arr, int low, int high, size_t size)
{
	int i, j, pivot, temp;

	pivot = arr[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			if (i != j)
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				print_array(arr, size);
			}
			i++;
		}
	}
	if (arr[i] != arr[high])
	{
		temp = arr[i];
		arr[i] = arr[high];
		arr[high] = temp;
		print_array(arr, size);
	}

	return (i);
}

