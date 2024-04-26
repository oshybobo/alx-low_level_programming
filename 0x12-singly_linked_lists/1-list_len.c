<<<<<<< HEAD
#include "main.h"

/**
 * list_len - returns number of elements in a linked list
 *
=======
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
>>>>>>> cc0534b0cc54afd9659104b07271298c9c0feaa1
 * @h: linked list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	if (h && h->next)
		return (1 + list_len(h->next));
	else if (h)
		return (1);
	return (0);
}

