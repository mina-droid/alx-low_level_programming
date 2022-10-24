#include "lists.h"

/**
 * add_nodeint - Prints all the elements of a list_t list.
 * @head: The list_t list.
 *
 * @n: The string.
 *
 * Return: The new node.
 */

listint_t *add_nodeint(listint_t **head, const int n);
{
listint_t *newNode;
int newN;
unsigned int newLen;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newN = n;
newNode->n = newN;
newNode->next = *head;
*head = newNode;
return (newNode);
}
