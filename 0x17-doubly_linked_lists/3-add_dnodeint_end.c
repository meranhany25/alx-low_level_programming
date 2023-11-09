#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const
 
int n)

{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (!new_node) {
        return
 
NULL;
    }

    new_node->n = n;
    new_node->prev = NULL;

    dlistint_t *current_node = *head;

    while (current_node->next != NULL) {
        current_node = current_node->next;
    }

    new_node->next = NULL;
    current_node->next = new_node;
    new_node->prev = current_node;

    return new_node;
}
