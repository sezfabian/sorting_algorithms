#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending
 * using bubblesort algorithm
 * @array: pointer to array of integers to be sorted
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (size < 2 || array == NULL)
		return;

	for (i =  size - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}

