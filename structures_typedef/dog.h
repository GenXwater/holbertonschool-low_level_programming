#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - a dog structure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog *new_dog(char *name, float age, char *owner);
void free_dog(struct dog *d);

#endif

