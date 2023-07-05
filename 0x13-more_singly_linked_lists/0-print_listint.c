#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print the number of elements
 * @h: Input elements
 *
 * Return: int
 */

size_t print_listint(const listint_t *h)
{
	size_t no_of_elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_of_elements++;
	}
	return (no_of_elements);
}
