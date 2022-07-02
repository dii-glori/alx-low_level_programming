#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	/* putchar - write c to stout */

	int c;
	int a;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
