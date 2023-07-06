#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free the memory allocated to list
 * @head: list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *ptr_saved;

	for (ptr = head; ptr != NULL; )
	{
		ptr_saved = ptr->next;
		free(ptr);
		ptr = ptr_saved;
	}
	free(ptr);
}
