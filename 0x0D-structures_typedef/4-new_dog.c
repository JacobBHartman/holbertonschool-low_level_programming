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
	int i;
	char *sname;
	char *sowner;

	/* allocate memory for struct we wish to return */
	d = malloc(sizeof(d));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	/* store a copy of name into sname */
	for (i = 0; name[i] != '\0'; i++)
		;
	sname = malloc(i * sizeof(char));
	if (sname == NULL)
	{
		free(sname);
		free(d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		sname[i] = name[i];
	sname[i] = '\0';

	/* store a copy of owner into sowner */
	for (i = 0; owner[i] != '\0'; i++)
		;
	sowner = malloc(i * sizeof(char));
	if (sowner == NULL)
	{
		free(sowner);
		free(sname);
		free(d);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		sowner[i] = owner[i];
	sowner[i] = '\0';

	d->name = sname;
	d->age = age;
	d->owner = sowner;
	return (d);
}
