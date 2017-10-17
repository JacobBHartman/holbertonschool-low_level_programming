#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - points to a newly allocated memoryspace which has a given string
 * @str: the string
 *
 * Return: a pointer to a char ie a string or array
 */
char *_strdup(char *str)
{
	int i;
	char *s;

	/* check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* get size of str */
	for (i = 0; str[i] != '\0'; i++)
		;

	/* allocate memory for new string s */
	s = malloc(1 + (i * sizeof(char)));

	/* if malloc erred, return NULL */
	if (s == NULL)
		return (NULL);

	/* copy str to s */
	for (i = 0; str[i] != '\0'; i++)
		*(s + i) = *(str + i);
	*(s + i) = *(str + i);

	/* return son! */
	return (s);
}

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
	char *sname;
	char *sowner;

	/* check for invalid name and owner */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* allocate memory for struct we wish to return */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* store a copy of name into sname */
	sname = _strdup(name);
	if (sname == NULL)
	{
		free(d);
		return (NULL);
	}
	else
		d->name = sname;

	d->age = age;

	/* store a copy of owner into sowner */
	sowner = _strdup(owner);
	if (sowner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	else
		d->owner = sowner;

	return (d);
}
