#include "main.h"
/**
 *_evaluate - evaluate function sqrt
 *@i: interger
 *@n: interger
 *Return: evaluate sqrt
 */

int _evaluate(int i, int n)
{

if (n % i == 0)
{
 return (0);
}
else if (i >= n / 2)
{
return (1);
}
else
{
_evaluate(i + 1, n);
}
}

/**
 *is_prime_number - encodes a string using rot13
 * @n: input number.
 *
 * Return: the pointer to dest.
 */

int is_prime_number(int n)
{
int k = 2;
int res;
if (n < 0)
{
return (0);
}
else if (n == 1 || n == 0)
{
return (0);
}
else
{
res = _evaluate(k, n);
if (res == 1)
{
return (1);
}
}
return (0);
}
