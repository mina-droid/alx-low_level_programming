#include "main.h"

/**
* print_last_digit - checks if a number is positive or negative or zero
*
* Parameters: Integer
*
* @n: int
*
* Return: (-n) if it is negative (n) otherwise
*/

int print_last_digit(int n)
{
int r1 = (n / 10);
int r2 = (10 * r1);
int lD = (n - r2);
return (lD);  
}
