#include "lists.h"

/**
 * free_listint2 - Prints all the elements of a list_t list.
 * @head: The list_t list.
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
listint_t **temp;
while (*head != NULL)
{
*temp = *head;
*head = (*head)->next;
free(*temp);
}
free(*head);
*head = NULL;
}
