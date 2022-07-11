#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer function
 * @name: pointer name
 * @age: int age
 * @owner: pwner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	*d = &my_dog;
	p->name = name;
	p->age = age;
	p->owner = owner;
}
