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
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest);
}
