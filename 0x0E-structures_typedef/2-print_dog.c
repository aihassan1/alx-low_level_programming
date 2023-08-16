#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to the struct dog.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: (nil)");

if (d->owner == NULL)
printf("Owner: (nil)");
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
