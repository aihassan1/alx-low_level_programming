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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
