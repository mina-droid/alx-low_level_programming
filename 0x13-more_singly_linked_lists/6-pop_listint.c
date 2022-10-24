#include "lists.h"

/**
 * pop_listint - Prints all the elements of a list_t list.
 * @head: The list_t list.
 *
 * Return: void.
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int nodeN;
if (head == NULL)
{
return (0);
}
nodeN = (*head)->n;
temp = *head;
*head = (*head)->next;
temp = NULL;
return (nodeN);
}
