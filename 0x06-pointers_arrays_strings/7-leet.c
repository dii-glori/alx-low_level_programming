#include "main.h"

/**
 * leet - encodes a string
 * @s: string
 * Return: char
 */
char *leet(char *s)
{
	int i, j;
	char sub[] = "aAeEoOtTlL";
	char with[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sub[j] != '\0'; j++)
		{
			if (sub[j] == s[i])
			{
				s[i] = with[j];
			}
		}
	}
	return (s);
}
