#include "main.h"
#include <string.h>

/**
 * infinite_add - add infinitely
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: pointer to store the result
 * @size_r: size of r
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *big;
	int sum = 0, carry = 0;
	int ln1 = strlen(n1), ln2 = strlen(n2);
	int i = ln1 - 1, j = ln2 - 1, k = 0, l;

	if (ln1 >= size_r || ln2 >= size_r)
		return (0);
	/* start adding */
	for (; i >= 0 && j >= 0 && k < size_r - 1; i--, j--)
	{
		sum = (n1[i] - '0') + (n2[j] - '0') + carry;
		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
	}
	big = ln1 > ln2 ? n1 : n2;
	l = ln1 > ln2 ? i : j;
	/* handle numbers of different l */
	while (carry != 0 && l >= 0)
	{
		sum = carry + (big[l--] - '0');
		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
	}
	/* check for overflow */
	if (carry != 0)
		r[k++] = carry + '0';
	if (k > size_r - 1)
		return (0);
	r[k] = '\0';
	/* reverse the result */
	for (i = 0, k -= 1; i < k; k--, i++)
	{
		j = r[i];
		r[i] = r[k];
		r[k] = j;
	}
	return (r);
}
