#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog of type struct dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Return: a structure of type struct dog redefined as dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(d));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
