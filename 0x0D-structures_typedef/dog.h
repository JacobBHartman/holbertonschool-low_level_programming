#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - characteristics of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: dogs have a name, an age, and an owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
