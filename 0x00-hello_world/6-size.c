#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (long)sizeof(i));
	printf("Size of a long long int: %d byte(s)\n", (long long)sizeof(i));
	printf("Size of a float: %d byte(s)\n", sizeof(f));

	return (0);
}
