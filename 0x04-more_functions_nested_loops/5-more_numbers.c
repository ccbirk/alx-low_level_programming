#include <stdio.h>
#include "main.h"


/**
 * more_numbers - Prints the numbers 0-14 ten times.
 *
 * Return: 0
 */

void more_numbers(void)
{
int i, r;

for (r = 0; r <= 9; r++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)

_putchar((i / 10) + '0');

_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
