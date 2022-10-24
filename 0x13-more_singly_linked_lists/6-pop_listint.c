#include "lists.h"

/**
 * pop_listint - Prints all the elements of a list_t list.
 * @head: The list_t list.
 *
 * Return: void.
 */

int pop_listint(listint_t **head)
{
int nodeN;
if (head == NULL)
{
return (0);
}
nodeN = (*head)->n;
head = (*head)->next;
*head = NULL;
return (nodeN);
}
