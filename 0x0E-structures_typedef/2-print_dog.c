#include <stdio.h>
#include "dog.h"
/**
 * print_dog -print information of dog
 *@d: dog structure
 **/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if ((*d).name == NULL)
printf("Name: (nil)");
else
printf("name: %s\n", d->name);
printf("Age: %f\n", d->age);
if ((*d).owner == NULL)
printf("Owner: (nil)");
else
printf("Owner: %s\n", d->owner);
}
