#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string
 * Return: result
 */
int _atoi(char *s)
{
	int i, result = 0, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
	}
	while ('0' <= s[i] && s[i] <= '9')
	{
		result = (result * 10) + ((s[i] - '0') * sign);
		i++;
	}

	return (result);
}
