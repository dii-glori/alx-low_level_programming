#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: sum of integers
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;

	if (n == 0)
		return 0;
	va_list ap;

	va_start (ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);
	
	va_end (ap);

	return (sum);
}
