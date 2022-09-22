#include "main.h"

char *leet(char *s)
{
int lowerCase [] = {97, 101, 111, 116, 108};
int upperCase [] = {65, 69, 79, 84, 76};
int numbersArr [] = {52, 51, 48, 55, 49};
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (s[i] == lowerCase[j] || s[i] == upperCase[j])
{
s[i] = numbersArr[j];
}
}
}
return (s);
}

/**
 *rot13 - convert a string to an integer.
 * @s: string
 * Return: char pointer
 */

char *rot13(char *s)
{
int lowerCaseAndUpper [] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
int Rot13 [] = {78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
int i = 0;
int j;
while (s[i] != '\0')
{
for (j = 0; j < 52; j++)
{
if (s[i] == lowerCaseAndUpper[j])
{
s[i] = Rot13[j];
}
}
}
return (s);
}
