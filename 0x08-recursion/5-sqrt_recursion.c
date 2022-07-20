#include "main.h"

int _sqrt_help(int n, int test);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: given number
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (n);
	else
		return (_sqrt_help(n, 2));
}

/**
 * _sqrt_help - find the square root of n
 * @n: the number
 * @test: tester
 * Return: the square root
 */
int _sqrt_help(int n, int test)
{
	int result = test * test;

	if (result == n)
		return (test);
	if (result > n)
		return (-1);
	else
		return (_sqrt_help(n, test + 1));
}
