#include "main.h"

/**
 * _strchr - encodes a string using rot13
 * @s: input string.
 *
 * @c: input char.
 *
 * Return: the pointer to dest.
 */

char *_strchr(char *s, char c)
{
int i;
char *oc = '\0';
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
oc = &s[i];
break;
}
}
if (s[i] == c)
{
oc = &s[i];
}
return (oc);
}

/**
 * _strspn - encodes a string using rot13
 * @s: input string.
 *
 * @accept: input string.
 *
 * Return: the pointer to dest.
 */
unsigned int _strspn(char *s, char *accept)

{
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0') /*Declaring WHILE *s */
	{
		j = 0;
		while (str2[j] != '\0') /*Declaring WHILE *accept*/
		{
			if (str2[j] == str1[i]) /*Evaluate condition*/
			{
				count++; /*count number*/
				break;
			}

			j++;    /*add j+1*/
		}

		if (s[i] != accept[j]) /*If aren't equals*/
		{
			break;
		}

		i++; /*add x+1*/
	}

	return (count); /*return the value of count*/
}
