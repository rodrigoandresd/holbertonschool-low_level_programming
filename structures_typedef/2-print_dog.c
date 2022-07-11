#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer function
 * return
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
		prinf("nil\n");
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
