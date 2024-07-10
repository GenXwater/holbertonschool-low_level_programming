#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Crée un nouveau chien.
 * @name: Le nom du chien.
 * @age: L'âge du chien.
 * @owner: Le nom du propriétaire du chien.
 *
 * Return: Un pointeur vers la nouvelle structure allouée
 * ou NULL en cas d'échec.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/** ptr > new structure allouée */
	dog_t *new_dog_ptr;

	/** Alloue de la mémoire pour la nouvelle structure */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL) /** Si l'alloc échoue, renvoie NULL */
		return (NULL);

	/** Alloue mémoire pour chaînes de caract. name et owner */
	new_dog_ptr->name = malloc(strlen(name) + 1);
	 /** Si l'alloc échoue, libère la mém. allouée & renvoie NULL */
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	new_dog_ptr->owner = malloc(strlen(owner) + 1);

	/** Si l'alloc échoue, libère la mém allouée et renvoie NULL */
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	/** Copie les valeurs des paramètres dans la nouvelle structure */
	strcpy(new_dog_ptr->name, name);
	new_dog_ptr->age = age;
	strcpy(new_dog_ptr->owner, owner);

	/** Retourne un pointeur vers la nouvelle structure allouée */
	return (new_dog_ptr);
}
