#include "list.h"
/**
 * add_node_begin - add node at first
 * @h: head
 * @str: str
 * Return: element? NULL
 */
List *add_node_begin(List **h, char *str)
{
List *last, *node = NULL;

node = malloc(sizeof(List));

if (node == NULL)
return (NULL);
node->str = strdup(str);
if (!node->str)
{
free(node);
return (NULL);
}
if (*h == NULL)
{
node->next = node->prev = node;
*h = node;
return (node);
}
last = (*h)->prev;
node->next = (*h);
node->prev = last;
(*h)->prev = last->next = node;
*h = node;

return (node);
}
/**
 * add_node_end - add node at end
 * @h: head
 * @str: str
 * Return: element? NULL
 */
List *add_node_end(List **h, char *str)
{
List *last, *node = NULL;

node = malloc(sizeof(List));

if (node == NULL || str == NULL)
return (NULL);

node->str = strdup(str);
if (!node->str)
{
free(node);
return (NULL);
}
if (*h == NULL)
{
node->next = node->prev = node;
*h = node;
return (node);
}
last = (*h)->prev;
last->next = node;
node->next = *h;
node->prev = last;
(*h)->prev = node;

return (node);
}
