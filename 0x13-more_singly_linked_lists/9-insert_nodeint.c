#include "lists.h"

/**
 * listint_len - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * insert_nodeint_at_index - Prints all the elements of a list_t list.
 * @head: The list_t list.
 * @idx: index
 * @idx: n
 * Return: void.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
size_t len;
unsigned int i = 0;
listint_t *newNode;
listint_t *itr = *head;
if (head == NULL)
{
return (NULL);
}
if (*head == NULL)
{
return (NULL);
}
len = listint_len(*head);
if (idx >= len)
{
return (NULL);
}
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = NULL;
while (i < idx)
{
if (i == (idx - 1))
{
newNode->next = (itr)->next;
(itr)->next = newNode;
}
itr = itr->next; 
i++;
}
itr = NULL;
return (newNode);
}
