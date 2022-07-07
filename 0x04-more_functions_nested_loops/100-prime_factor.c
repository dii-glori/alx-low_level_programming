#include <stdio.h>

/**
 * main - entry point
 * Return: 0;
 */

int main(void)
{
	int pf_one = 3;
	int pf_two = 4019;
	int pf_three = 50829599;

	if (pf_one >= pf_two && pf_one >= pf_three)
		printf("%d", pf_one);
	else if (pf_two >= pf_one && pf_two >= pf_three)
		printf("%d", pf_two);
	else if (pf_three >= pf_one && pf_three >= pf_two)
		printf("%d", pf_three);

	printf("\n");

	return (0);
}
