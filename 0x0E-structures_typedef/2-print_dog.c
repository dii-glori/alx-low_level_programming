#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: dog pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", ((*d).name) ? ((*d).name) : "(nil)");
	printf("Age: %lf\n", (*d).name);
	printf("Owner: %s\n", ((*d).owner) ? ((*d).owner) : "(nil)")
}
