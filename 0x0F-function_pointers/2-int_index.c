#include "function_pointers.h"

/**
 * int_index - earches for an integer
 *
 * @array: specifies which array to search in
 * @size: the size of the array
 * @cmp: the pointer to the comparing function
 *
 * Return: the index of the first element for which
 *the cmp function does not return 0, or -1 if no match is found
 *or if size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
