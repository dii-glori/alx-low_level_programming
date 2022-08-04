#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	unsigned int a = n - 1;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < a)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
