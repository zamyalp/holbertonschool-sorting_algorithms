#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - Sort an array of integers using Bubble sort algorthim
 * @array: array to sort
 * @size: number of elements in the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, swap = 1;
	int temp;

	if (!array || size < 2)
		return;

	while (swap == 1)
	{
		swap = 0;
/*Check if swapping occurs. */
		for (i = 1; i < size; i++)
/*Loop to access each array element.*/
		{
			if (array[i] < array[i - 1])
/*Compare two array elements to sort in descending order. */
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i - 1] = temp;
				i = 0
/*Swapping occurs if elements are not in intended order. */
				swap = 1;
				print_array(array, size);
			}
		}
	}
}
