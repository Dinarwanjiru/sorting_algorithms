#include "sort.h"

/**
 * swap - swaps integers in the list(a, b)
 * @a: first integer pointer
 * @b: second integer pointer
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * by dividing the list, then looking for smallest value in list
 * by comparing all values and set the smallest value in left
 * side of ordered list
 *
 *  @array: pointer to the array that is being  sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t l, m, hold;

	if (array == NULL || size < 2)
		return;
	for (l = 0; l < size - 1; l++)
	{
		hold = l;
		for (m = l + 1; m < size; m++)
		{
			if (array[m] < array[hold])
			{
				hold = m;
			}
		}
		if (hold != l)
		{
			swap(&array[l], &array[hold]);
			print_array(array, size);
		}
	}
}
