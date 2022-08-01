#include "dog.h"
#include<string.h>
#include<stdlib.h>

/**
 * new_dog - creates new dog
 * @name: doga name
 * @age: dog age
 * @owner: dog owner
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *t1, *t2;

	d = malloc(sizeof(*d));
	if (d == NULL)
		return (NULL);
	t1 = malloc((strlen(name) + 1) * sizeof(char));
	if (t1 == NULL)
	{
		free(d);
		return (NULL);
	}
	t2 = malloc((strlen(owner) + 1) * sizeof(char));
	if (t2 == NULL)
	{
		free(d);
		free(t1);
		return (NULL);
	}
	t1 = strcpy(t1, name);
	t2 = strcpy(t2, owner);
	d->age = age;
	d->name = t1;
	d->owner = t2;
	return (d);
}
