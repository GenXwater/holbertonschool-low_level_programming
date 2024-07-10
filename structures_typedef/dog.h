#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Définit une nouvelle structure pour représenter un chien.
 * @name: Le nom du chien.
 * @age: L'âge du chien.
 * @owner: Le nom du propriétaire du chien.
 */
typedef struct dog_t
{
	char *name; /**< Le nom du chien */
	float age; /**< L'âge du chien */
	char *owner; /**< Le nom du propriétaire du chien */
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);

#endif /* DOG_H */

