#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * argstostr - concatenates several string args
 * @ac: arguments count
 * @av: pointer to strings
 *
 * Return: pointer to new or NULL
 */
char *argstostr(int ac, char **av)
{
	int k, j, i = 0, size = 0;
	char *arr, *tmp;

	if (!ac || av == NULL)
		return (NULL);
	/* calculate total size */
	for (i = 0, j = 0; i < ac; i++, j++)
	{
		/* skip nulls */
		if (av[i] == NULL)
		{
			j--;
			continue;
		}
		size += strlen(av[i]);
	}
	arr = malloc((size + j + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			continue;
		j = 0;
		tmp = av[i];
		while (tmp[j])
			arr[k++] = tmp[j++];
		arr[k++] = '\n';
	}
	arr[k] = '\0';
	return (arr);
}
