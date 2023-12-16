#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;


	if (array == NULL)
		return (-1);


	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);


		i = l + (r - l) / 2;

		/* If the middle element is the value */
		if (array[i] == value)
			/* Return the index */
			return (i);


		if (array[i] > value)
			/* Update the right boundary */
			r = i - 1;
		else
			/* Otherwise, update the left boundary */
			l = i + 1;
	}
	/* Value not found, return -1 */
	return (-1);
}
