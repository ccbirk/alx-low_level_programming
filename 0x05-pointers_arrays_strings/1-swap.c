#include "main.h"

/**
 * swap_int - Swaps values of two integers
 *
 * @a: integer
 * @b: integer
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

