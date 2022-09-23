#include "main.h"

/**
 *_strcat - convert a string to an integer.
 * @dest: string one
 *
 * @src: string two
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
int dest_len = _strlen(dest);
while (*src != '\0')
{
dest[dest_len] = *src;
dest_len++;
src++;
}
dest[dest_len] = '\0';
return (dest);
}

/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{

int len, i, half;
char temp;

for (len = 0; s[len] != '\0'; len++)
;

i = 0;

half = len / 2;

while (half--)
{
	temp = s[len - i - 1];
	s[len - i - 1] = s[i];
	s[i] = temp;
	i++;
}

}

/**
* _strlen-swaps the values of two integers
*
* @s: string
*
* Return: int
*/

int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}

/**
* infinite_add - prints the last digit of a number
*
* Parameters: Integer
*
* @n1: big  int1
*
* @n2: big int2
*
* @r: buffer
*
* @size_r: buffer size
*
* Return: (lD) the last digit of a number
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int nSmall;
int nstr1 = _strlen(n1);
int nstr2 = _strlen(n2);
int carry = 0;
int sum;
int i;
if (nstr1 + nstr2 >= size_r)
{
return (0);
}
if (_strlen(n1) > _strlen(n2))
{
nSmall = _strlen(n2);
}
else
{
nSmall = _strlen(n1);
}
rev_string(n1);
rev_string(n2);
for (i = 0; i < nSmall; i++)
{
sum = ((n1[i] - '0')+(n2[i] - '0') + carry);
}
return (r);
}
