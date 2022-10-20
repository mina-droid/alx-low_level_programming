#include "lists.h"

/**
 *_strlen_recursion - encodes a string using rot13
 * @s: input string.
 *
 * Return: the pointer to dest.
 */

int _strlen_recursion(char *s)

{
if (*s == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s + 1));

}

/**
*print_list-print list
*@h:pointer to the list
*Return: num of nodes
*/

size_t print_list(const list_t *h);
{

}
