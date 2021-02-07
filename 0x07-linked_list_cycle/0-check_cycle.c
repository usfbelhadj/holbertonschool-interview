#include "lists.h"
#include <stdio.h>

int check_cycle(listint_t *list)
{
    listint_t *s = list, *f = list;

    if (!list)
        return (0);
    while (f && f->next)
    {
        s = s->next;
        f = f->next->next;
        if (s == f)
        {
            return (1);
        }
    }
    return (0);
}