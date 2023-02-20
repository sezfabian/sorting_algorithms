#include "sort.h"

/**
 * insertion_sort_list - sorts a list of integers in ascending order
 * using insertionsort algorithm
 * @list: pointer to doubly linked list of integers to be sorted
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *mylist, *temp;

	mylist = *list;

	if (mylist == NULL || mylist->next == NULL)
		return;

	while (mylist != NULL)
	{
		temp = mylist;
		while (temp->prev && temp->prev->n > temp->n)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;

			if (!temp->prev)
				*list = temp;
			else
				temp->prev->next = temp;

			print_list(*list);
		}
		mylist = mylist->next;
	}
}

