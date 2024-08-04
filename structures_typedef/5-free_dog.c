#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to dog struct elements
 * @name: dog's name in a string
 * @age: dog's age in a float
 * @owner: dog's owner name in a string
 *
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner; /*same as (*d).owner = owner;*/
	}
}
