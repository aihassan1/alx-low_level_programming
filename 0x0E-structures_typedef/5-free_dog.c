#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees a dog structure.
 * @d: Pointer to the dog structure.
 *
 * Description: Frees the memory allocated for the dog's name and owner,
 * and then frees the memory allocated for the dog structure itself.
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
