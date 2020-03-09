#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog and owner info
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Description: information about the dog and his owner
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
