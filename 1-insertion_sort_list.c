#include "sort.h"

/**
 * swap_nodes - function that swap two nodes in a listint_t
 * doubly-linked list.
 *
 * @head: pointer to the head of the doubly-linked list.
 * @node: first node to swap.
 * @node2: The second node to swap.
 */
void swap_nodes(listint_t **head, listint_t **node, listint_t *node2)
{
	(*node)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node;
	node2->prev = (*node)->prev;
	node2->next = *node;
	if ((*node)->prev != NULL)
		(*node)->prev->next = node2;
	else
		*head = node2;
	(*node)->prev = node2;
	*node = node2->prev;
}

/**
 * insertion_sort_list - function that sorts a doubly linked list of integer
 * in ascending order using the Insertion sort algorithm
 *
 * @list: double linked list list
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tem, *current, *inst;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (current = (*list)->next; current != NULL; current = tem)
	{
		tem = current->next;
		inst = current->prev;
		while (inst != NULL && current->n < inst->n)
		{
			swap_nodes(list, &inst, current);
			print_list((const listint_t *)*list);
		}
	}
}
