#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog, or NULL if allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *p;

p = malloc(sizeof(dog_t));
if (p == NULL)
return (NULL);

p->name = malloc(strlen(name) + 1);
if (p->name == NULL)
{
free(p);
return (NULL);
}

strcpy(p->name, name);

p->age = age;

p->owner = malloc(strlen(owner) + 1);
if (p->name == NULL)
{
free(p);
return (NULL);
}

strcpy(p->owner, owner);
return (p);
}
