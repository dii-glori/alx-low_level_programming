#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: argument array
 *
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
