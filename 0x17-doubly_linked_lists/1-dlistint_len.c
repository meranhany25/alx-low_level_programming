#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint_len(const dlistint_t *h)
{
        size_t count = 0;
	int lenght;

        while (h != NULL)
        {
                printf("%d\n", h->n);
                count++;
                h = h->next;
		lenght = length(count);
        }
        return (lenght);
