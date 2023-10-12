#include "main.h"

/**
 * print_line - Draws a line in the terminal
 *
 * @n: Number of characters
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
int ln;

if (n <= 0)
{
_putchar('\n');
}

else
{
for (ln = 1; ln <= n; ln++)
{
_putchar('_');
}
_putchar('\n');
}
}
