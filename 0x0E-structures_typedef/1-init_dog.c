#include<stdlib.h>
#include "dog.h"
/**
 * init_dog - dog information
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
 *@d: dog structure
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
