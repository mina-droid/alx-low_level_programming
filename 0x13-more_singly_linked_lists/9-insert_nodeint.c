#include "lists.h"

/**
 * insert_nodeint_at_index - Prints all the elements of a list_t list.
 * @head: The list_t list.
 * @idx: index
 * @idx: n
 * Return: void.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *newNode;
listint_t *itr = *head;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
if (idx == 0)
{
newNode->next = itr;
*head = newNode;
return (newNode);
}
while (i < (idx - 1))
{
if (itr == NULL || itr->next == NULL)
{
return (NULL);
}
itr = itr->next;
i++;
}
newNode->next = itr->next;
itr->next = newNode;
return (newNode);
}
