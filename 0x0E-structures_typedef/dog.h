#ifndef DOH_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - struct for dog details
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to owner's name
 */
struct dog{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
