#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - creating a linked list to print out the number of elements
 * @h: Input
 *
 * Return: no_of_elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t no_of_elements = (size_t)malloc(sizeof(listint_t));

	no_of_elements = 0;
	while (h != NULL)
	{
		h = h->next;
		no_of_elements++;
	}
	return (no_of_elements);
}
