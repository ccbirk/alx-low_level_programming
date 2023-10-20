#include "main.h"

/**
 * print_number - prints an integer;
 *
 * @n: integer to be printed;
 *
 * Retunr: 0
 */

void print_number(int n)
{
	unsigned int num_1;

	if (n < 0)
	{
		num_1 = -n;
		_putchar('-');
	} else
	{
		num_1 = n;
	}

	if (num_1 / 10)
		print_number(num_1 / 10);

	_putchar((num_1 % 10) + '0');
}
