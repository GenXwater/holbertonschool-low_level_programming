#include "dog.h"

/**
 * init_dog - Initialise une variable de type struct dog.
 * @d: Un pointeur vers la structure à initialiser.
 * @name: Le nom du chien.
 * @age: L'âge du chien.
 * @owner: Le nom du propriétaire du chien.
 *
 * Description: Cette fonction initialise une variable de type
 *              struct dog en affectant les valeurs de name, age
 *              et owner aux membres correspondants de la structure
 *              pointée par d.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/** Affecte la valeur de name au membre name de la structure */
	d->name = name;
	/** Affecte la valeur de age au membre age de la structure */
	d->age = age;
	/** Affecte la valeur de age au membre age de la structure */
	d->owner = owner;
}
