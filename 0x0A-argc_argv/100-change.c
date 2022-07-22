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
	int coins[] = {25, 10, 5, 2, 1};
	int cents, count = 0, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		cents = 0;
	while (i < 5 && cents)
	{
		count += cents / coins[i];
		cents %= coins[i];
		i++;
	}
	printf("%d\n", count);

	return (0);
}
