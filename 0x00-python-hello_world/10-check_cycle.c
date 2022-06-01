#include "lists.h"
#include <stdio.h>

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: singly linked list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *head = list;
	listint_t *tail = list;

	if (!list)
	{
		return (0);
	}

	while (1)
	{
		if (head->next != NULL && head->next->next != NULL)
		{
			head = head->next->next;
			tail = tail->next;

			if (head == tail)
			{
				return (1);
			}
		}
		else
		{
			return (0);
		}
	}
}
