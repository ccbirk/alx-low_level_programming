#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks to see if letter is lower or uppercase
 *
 * @c: letter gets checked
 *
 * Return: 1 or 0 if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
