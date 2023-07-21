#include "sort.h"

/**
 * swap_ints - two integer for her husband
 * @a: First
 * @b: Second
 */

void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sort of an array in ascending order
 * @array: array to sort
 * @size: size of array
 *
 * description: print the array after each swap
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubb = false;

	if (array == NULL || size < 2)
		return;

	while (bubb == false)
	{
		bubb = true;
		for (i = 0; i < len -1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubb = false;
			}
		}
		len--;
	}
}	
