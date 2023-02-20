#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 *                  the selection sort algorithm
 * @array: pointer to array of integers
 * @size: size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, index;

	for (i = 0; i < size - 1; i++)
	{
		temp = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < temp)
			{
				temp = array[j];
				index = j;
			}
		}
		if (temp != array[i])
		{
			array[index] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}

