#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees a list of ints
 * @head: address of pointer to first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
