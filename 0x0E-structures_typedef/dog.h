#ifndef __dog
#define __dog
/**
 * struct dog - Shows the dog and its information
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Owner of the dog.
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
