#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory
 *
 * @b: the size to allocate
 *
 * Return - Nothing
 * 0-malloc_checked -  checks for value
*/

void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);

return (p);
}
