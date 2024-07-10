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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

