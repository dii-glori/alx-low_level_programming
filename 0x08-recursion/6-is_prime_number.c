#include "main.h"

int _prime_help(int n, int test);

/**
 * is_prime_number - returns prime numbers
 * @n: any number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (_prime_help(n, 2));
}

/**
 * _prime_help -finds prime number
 * @n: number
 * @test: tester
 * Return: prime number
 */
int _prime_help(int n, int test)
{
	if (test > n / 2)
		return (1);
	else if (n % test == 0)
		return (0);
	return (_prime_help(n, test + 1));
}
