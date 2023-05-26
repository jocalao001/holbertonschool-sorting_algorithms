#include "sort.h"
/**
 * bubble_sort - Function that sorts an array of integers in ascending order.
 * @array:       Pointer to the first element of an array to sort.
 * @size:        Size of the array to sort.
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	bool swapped;
	size_t i, end = size;

	while (end > 0)
	{
		swapped = false;
		for (i = 1; i < end; i++)
		{
			/*
			 * If the current element is greater than the next,
			 * we swap both elements
			 */
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				/*
				 * We indicate that an exchange has been
				 * performed in this iteration.
				 */
				swapped = true;
				print_array(array, size);
			}
		}
		/*
		 * If no swap has been done in the last iteration, then the
		 * array is sorted and we can terminate the loop.
		 */
		if (!swapped)
		{
			break;
		}
		/*
		 * We decrement the "end" variable so that in the next iteration
		 * the last element is not compared with the next one.
		 */
		end--;
	}
}
