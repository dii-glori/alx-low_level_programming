#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: a string
 * Return: a char
 */
char *cap_string(char *s)
{
	int i;
	char sep[] = ",;.!?(){}\n\t\" ";
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
			continue;
		}
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				i++;
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] -= 32;
				continue;
			}
		}
	}
	return (s);
}
