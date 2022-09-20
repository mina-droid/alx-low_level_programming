#include "main.h"


/**
* _strcpy-prints a string followed by a new line, to stdout
*
* @dest: destintion
*
* @src: sourc
*
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
*dest = '\0';
return (dest);
}
