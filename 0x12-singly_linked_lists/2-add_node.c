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
 * add_node - Prints all the elements of a list_t list.
 * @head: The list_t list.
 *
 * @str: The string.
 *
 * Return: The new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t * newNode;
  	char *newStr;
  	unsigned int newLen;
	newNode = malloc(sizeof(list_t));
	newStr = strdup(str);
	newLen = _strlen_recursion(newStr);
  	newNode->str = newStr;
  	newNode->len = newLen;
  	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
