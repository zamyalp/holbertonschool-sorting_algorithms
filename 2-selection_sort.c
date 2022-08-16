#include "sort.h"

/**
 * selection_sort - sorts an array with selection sort
 * @array: array to be sorted
 * @size: number of items in the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_element;
	int temp;
/*One by one move boundary of unsorted subarray.*/
	for (i = 0; i < size - 1; i++)
	{
		/* Find the minimum element in unsorted array.*/
		min_element = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_element])
				min_element= j;
/*Sort in ascending order.*/
		}
		if (min_element != i)
		{
			temp = array[i];
			array[i] = array[min_element];
			array[min_element] = temp;
			print_array(array, size);
		}
	}
}
