#include "variadic_functions.h"
/**
 * print_numbers - prints @n integer args using a separator in between
 * @n: number of args that will get fed
 * @separator: a string(char pointer) to separate @n args
 * check if @separator is NULL or not
 * if not NULL prints @n args followed by @separator
 * while i(counter) is less than (@n - 1) and once i < n print a new line
 * otherwise print @n args without @separator and end the full print using
 * new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
