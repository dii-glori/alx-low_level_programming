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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d", argv[1] * argv[2]);

	return (0);
}
