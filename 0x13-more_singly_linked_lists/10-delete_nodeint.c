#include "lists.h"

/**
 * delete_nodeint_at_index - Prints all the elements of a list_t list.
 * @head: The list_t list.
 * @index: index
 * Return: void.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *itr = *head, *temp;
if (index == 0)
{
*head = (*head)->next;
free(itr);
return (1);
}
while (i < (index - 1))
{
if (itr == NULL || itr->next == NULL)
{
return (-1);
}
itr = itr->next;
i++;
}
temp = itr->next;
itr->next = temp->next;
free(temp);
return (1);
}
