#include <stdio.h>

/**
 * main - entry
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	putchar('\n');

	return (0);
}

