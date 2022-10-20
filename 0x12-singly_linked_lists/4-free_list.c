#include "lists.h"

/**
 * free_list - Prints all the elements of a list_t list.
 * @head: The list_t list.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
while (head != NULL)
{
free(head->str);
head = head->next;
}
free(head);
}
