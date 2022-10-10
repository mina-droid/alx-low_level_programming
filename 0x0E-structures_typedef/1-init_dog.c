#include "dog.h"

/**
*init_dog-dog init
*@d:dog
*@name:dog name
*@age:dog age
*@owner:dog owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
