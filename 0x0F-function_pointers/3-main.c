#include "3-calc.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: Takes three cli args
 * in the form A × B, where A and B are ints
 * and × is an operator
 * @argc: argument count
 * @argv: arguments array
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int (*f)(int, int);
	int a, b, res;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	res = f(a, b);
	printf("%d\n", res);
	return (0);
}
