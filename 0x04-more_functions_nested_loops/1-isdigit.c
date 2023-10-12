#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks to see if it is a digit or not
 *
 * @c: gets checked to see if it is a digit
 *
 * Return: return 1 if its a digit or 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
