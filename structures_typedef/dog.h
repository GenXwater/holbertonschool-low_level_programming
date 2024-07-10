#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Définit une nouvelle structure pour représenter un chien.
 * @name: Le nom du chien.
 * @age: L'âge du chien.
 * @owner: Le nom du propriétaire du chien.
 */
struct dog
{
	char *name; /**< Le nom du chien */
	float age; /**< L'âge du chien */
	char *owner; /**< Le nom du propriétaire du chien */
};

#endif /* DOG_H */

