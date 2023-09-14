#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a double linked list.
 *
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == x)
			return (tmp);
		x++;
		tmp = tmp->next;
	}
	return (NULL);
}
