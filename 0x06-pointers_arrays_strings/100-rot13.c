#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: the sring
 * Return: character
 */
char *rot13(char *s)
{
	int i;
	int j;
	char alpha[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	int index = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				index = (j + 26) % 52;
				s[i] = alpha[index];
				break;
			}
		}
	}
	return (s);
}
