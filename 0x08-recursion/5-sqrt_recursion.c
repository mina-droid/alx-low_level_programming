#include "main.h"
/**
 *_evaluate - evaluate function sqrt
 *@i: interger
 *@n: interger
 *Return: evaluate sqrt
 */

int _evaluate(int i, int n)
{
/*Evaluate function*/
if (n == 0 || n == 1)
return (n);

else if (i * i < n)
return (_evaluate(i + 1, n));

else if (i * i == n) /*Condiction base*/
return (i);

return (-1);

return (-1);
}

/**
 *_sqrt_recursion - encodes a string using rot13
 * @n: input number.
 *
 * Return: the pointer to dest.
 */

int _sqrt_recursion(int n)
{
int k = 0;
if (n < 0)
{
return (-1);
}
else if (n == 1 || n == 0)
{
return (n);
}
else if (n == 1 || n == 0)
{
return (n);
}
else
{
return(_evaluate(k, n));
}
return (-1);
}
