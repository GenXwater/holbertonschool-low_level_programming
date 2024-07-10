#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new allocated structure
 * or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	int i, name_len, owner_len;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	for (name_len = 0; name[name_len] != '\0'; name_len++) {}
	new_dog_ptr->name = malloc(name_len + 1);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++) {}
	new_dog_ptr->owner = malloc(owner_len + 1);
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
