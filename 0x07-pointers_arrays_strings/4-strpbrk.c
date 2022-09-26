    
#include "main.h"

/**
 * _strpbrk - encodes a string using rot13
 * @s: input string.
 *
 * @accept: input char.
 *
 * Return: the pointer to dest.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*Declaring WHILE*/
	{
		j = 0;
		while (accept[j] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++; /*add j+1*/
		}

		s++; /*add s+1*/
	}
	return (0);

}
