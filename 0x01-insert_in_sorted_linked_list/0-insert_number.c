#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - insert a node
 * @head: head
 * @number: value
 * Return: address new node
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *old;

	old = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;

	if (!(*head) || (*head)->n >= new->n)
	{
		new->next = *head;
		*head = new;
	}
	while (old->next && new->n > old->next->n)
		old = old->next;
	new->next = old->next;
	old->next = new;
	return (new);
}
