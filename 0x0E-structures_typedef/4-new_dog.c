#include<stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *Return: pointer to new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *black;
char *cpname, *cpowner;
black = malloc(sizeof(struct dog));
if (black == NULL)
return (NULL);
black->name = name;
black->age = age;
black->owner = owner;
cpname = (*black).name;
cpowner = (*black).owner;
return (black);
}
