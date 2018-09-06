#include "../includes/push_swap.h"

int		find_smallest(t_list *list)
{
	t_node 	*node;
	int		smallest;

	node = list->head;
	smallest = list->head->data;
	while (node != NULL)
	{
		if (node->data < smallest)
			smallest = node->data;
		node = node->next;
	}
	return (smallest);
}

int		find_smallest_pos(t_list *list)
{
	t_node 	*node;
	int		smallest;
	int		smallest_pos;

	node = list->head;
	smallest = list->head->data;
	smallest_pos = 1;
	while (node != NULL)
	{
		if (node->data < smallest)
		{
			smallest = node->data;
			smallest_pos++;
		}
		node = node->next;
	}
	return (smallest_pos);
}

int		move_to_top(int smallest, int len, int smallest_pos, t_list *list_a)
{
	int		half;

	half = half_length(len);

	if (list_a->head->data != smallest && list_a->tail->data == smallest)
		rra_print(list_a);
	else if (list_a->head->data != smallest && list_a->head->next->data == smallest)
		sa_print(list_a);
	else if (list_a->head->data != smallest && list_a->tail->prev->data == smallest)
	{
		rra_print(list_a);
		rra_print(list_a);
	}
	else
		if (smallest_pos > half)
			rra_print(list_a);
		else if (smallest_pos <= half)
			ra_print(list_a);
}

int		half_length(int len)
{
	int		half;

	if (len % 2 == 0)
		half = len / 2;
	else
	{
		len = len - 1;
		half = len / 2;
	}
	return (half);
}

int		fifth_length(int len)
{
	int		fifth;

	if (len % 5 == 0)
		fifth = len / 5;
	else
	{
		while (len % 5 != 0)
			len = len - 1;
		fifth = len / 5;
	}
	return (fifth);
}