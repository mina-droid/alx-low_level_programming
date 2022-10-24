#include "lists.h"

/**
 * sum_listint - Prints all the elements of a listint_t list.
 * @head: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
{
return (0);
}
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
