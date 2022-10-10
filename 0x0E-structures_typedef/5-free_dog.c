#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
*free_dog-dog init
*@d:dog
*Return: void
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
