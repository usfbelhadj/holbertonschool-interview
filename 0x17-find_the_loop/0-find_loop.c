#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to head of linked-list
 * Return: The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *f, *s;

if (!head)
return (NULL);
f = s = head;
while (s && f && f->next)
{
f = f->next;
s = (s->next)->next;
if (f == s)
{
f = head;
while (f != s)
{
f = f->next;
s = s->next;
}
return (s);
}
}
return (NULL);
}
