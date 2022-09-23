#include "main.h"

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
}
