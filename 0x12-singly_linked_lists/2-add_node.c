#include "lists.h"

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
  newStr = strdup(str);
  
  
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
