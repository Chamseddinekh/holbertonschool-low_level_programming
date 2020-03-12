#include "function_pointers.h"
/**
* array_iterator - print array
*@array: pointer to array
*@size: size of array
*@action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
return;
}
