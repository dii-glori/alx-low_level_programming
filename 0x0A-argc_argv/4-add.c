#include <stdio.h>
#include <stdlib.h>

int is_number(char *s);

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: argument array
 *
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
int is_number(char *s)
{
	while (*s)
	{
		if (*s < 48 || *s > 58)
		{
			return (0);
		}
		s++;
	}
	return (1);
}
