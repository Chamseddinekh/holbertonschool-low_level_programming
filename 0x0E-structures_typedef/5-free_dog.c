#include<stdlib.h>
#include "dog.h"
/**
 *  free_dog - creates a new dog
 *@d: dog name
 **/
void free_dog(dog_t *d);
{
if (d != NULL)
{
free(d->name);
free(d->age);
free(d->owner);
}
}
