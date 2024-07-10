#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Affiche les informations sur un chien.
 * @d: Un pointeur vers la structure à afficher.
 *
 * Description: fonction ki affiche les informations sur un chien en utilisant
 *              le format spécifié dans l'énoncé. Si un élément de la
 *              structure est NULL, la fonction affiche (nil)
 *              à la place. Si d est NULL, la fonction ne fait rien.
 */
void print_dog(struct dog *d)
{
	if (d == NULL) /** Si d est NULL, ne fait rien */
		return;

	/** Affiche les informations sur le chien en utilisant le format spécifié */
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
