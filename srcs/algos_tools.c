/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 19:41:01 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/06 19:41:05 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_smallest(t_list *list)
{
	t_node	*node;
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
	t_node	*node;
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

int		move_to_top(int smallest, int len, int smallest_pos, t_list *list)
{
	int		half;

	half = half_length(len);
	if (list->head->data != smallest && \
	list->tail->data == smallest)
		rra_print(list);
	else if (list->head->data != smallest && \
	list->head->next->data == smallest)
		sa_print(list);
	else if (list->head->data != smallest && \
	list->tail->prev->data == smallest)
	{
		rra_print(list);
		rra_print(list);
	}
	else
	{
		if (smallest_pos > half)
			rra_print(list);
		else if (smallest_pos <= half)
			ra_print(list);
	}
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
