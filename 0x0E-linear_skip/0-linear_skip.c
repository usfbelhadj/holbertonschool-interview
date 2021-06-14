#include "search.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * check_in_list - Check the list
 * @s: the input
 * @e: the size
 * @value: seaach value
 * Return: the index of the value, or -1
 */
skiplist_t *check_in_list(skiplist_t *s, skiplist_t *e, int value)
{
printf("Value found between indexes [%li] and [%li]\n",
s->index, e->index);
for (; s != e->next;)
{
printf("Value checked at index [%li] = [%i]\n",
s->index, s->n);
if (s->n == value)
return (s);
s = s->next;
}
return (NULL);
}
/**
 * linear_skip - Function that searches for a value
 * @list: pointer to the head
 * @value: value to search
 *
 * Return: Success
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *s, *e;

if (list == NULL)
return (NULL);
e = list;
while (e != NULL)
{
s = e;
if (e->express)
e = e->express;
else
{
for (; e->next;)
e = e->next;
break;
}
printf("Value checked at index [%li] = [%i]\n", e->index, e->n);
if (e->n >= value)
return (check_in_list(s, e, value));
}
return (check_in_list(s, e, value));
}
