#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    
    while (h != NULL) {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }
    
    return count;
}
