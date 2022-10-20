#include "lists.h"

/**
 * free_list - Prints all the elements of a list_t list.
 * @head: The list_t list.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head;
free(head->str);
head = head->next;
free(temp)
}
free(head);
}
