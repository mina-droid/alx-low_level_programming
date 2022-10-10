#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
*print_dog-dog init
*@d:dog
*Return: void
*/

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog_t new_d = { name, age, owner };
if (new_d == 0)
{
return (NULL);
}
}
