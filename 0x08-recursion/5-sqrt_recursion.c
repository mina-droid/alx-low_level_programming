#include "main.h"
/**
 *isqrt_rec - encodes a string using rot13
 * @n: input number.
 *
 * @k: input number.
 *
 * Return: the pointer to dest.
 */

int isqrt_rec(int k, int n) {	 
	int next_k = (k + n/k) / 2; 
	if (k*k <= n && (k+1)*(k+1) > n)  
		return k; 
	else 
		return isqrt_rec(next_k, n); 
} 

/**
 *_sqrt_recursion - encodes a string using rot13
 * @n: input number.
 *
 * Return: the pointer to dest.
 */

int _sqrt_recursion(int n)
{
int k = 1;
int res;
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
res = isqrt_rec(k,n);
if (res * res == n)
{
return (res);
}
return (-1);
}
}
