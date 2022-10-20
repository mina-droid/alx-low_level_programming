#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>


/**
*struct lists- list struct
*@str: string
*@len: string length
*@next: pointer to next node
*/

typedef struct lists 
{
char *str;
unsigned int len;
lists *next;
} list_t;

int _strlen_recursion(char *s);
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
