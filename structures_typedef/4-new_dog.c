#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Crée un nouveau chien.
 * @name: Le nom du chien.
 * @age: L'âge du chien.
 * @owner: Le nom du propriétaire du chien.
 *
 * Return: Un pointeur vers la nouvelle structure allouée,
 * ou NULL en cas d'échec.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	int i;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	new_dog_ptr->name = malloc(strlen(name) + 1);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	new_dog_ptr->owner = malloc(strlen(owner) + 1);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		new_dog_ptr->name[i] = name[i];
	new_dog_ptr->name[i] = '\0';

	new_dog_ptr->age = age;

	for (i = 0; owner[i] != '\0'; i++)
		new_dog_ptr->owner[i] = owner[i];
	new_dog_ptr->owner[i] = '\0';

	return (new_dog_ptr);
}

