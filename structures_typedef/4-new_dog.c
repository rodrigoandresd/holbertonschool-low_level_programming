#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog- function that creates a new dog
 * @name: pointer name
 * @age: int age
 * @owner: pwner
 * Return: function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy_dog;
	int len_name, len_owner;

	len_name = strlen(name);
	len_owner = strlen(owner);

	copy_dog = malloc(sizeof(dog_t));
		if (copy_dog == NULL)
			return (NULL);
	copy_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (copy_dog->name == NULL)
	{
		free(copy_dog);
		return (NULL);
	}
	copy_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (copy_dog->owner == NULL)
	{
		free(copy_dog);
		free(copy_dog->name);
		return (NULL);
	}
	strcpy(copy_dog->name, name);
	copy_dog->age = age;
	strcpy(copy_dog->owner, owner);

	return (copy_dog);
}
