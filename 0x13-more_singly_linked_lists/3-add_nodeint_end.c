#include "lists.h"

/**
 * add_nodeint_end - Prints all the elements of a list_t list.
 * @head: The list_t list.
 *
 * @n: The string.
 *
 * Return: The new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *lastNode;
int newN;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newN = n;
newNode->n = newN;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
}
else
{
lastNode = *head;
while (lastNode->next != NULL)
{
lastNode = lastNode->next;
}
lastNode->next = newNode;
}
return (*head);
}
