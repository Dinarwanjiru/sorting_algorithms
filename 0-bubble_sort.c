#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers adjacent
 * to each other repeatedly to create a sorted list
 * in ascending order(bubble sort list)
 *
 * @array: The array
 * @size: size of array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t l, m;
	int temp;

	if (size < 2)
		return;

	for (l = 0; l < size - 1; l++)
	{
		for (m = 0; m < size - l - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				temp = array[m];
				array[m] = array[m + 1];
				array[m + 1] = temp;
				print_array(array, size);
			}

		}
	}
}
