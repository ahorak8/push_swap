/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_large.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 19:41:20 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/06 19:41:22 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_val_limit(int len, int smallest, int val_limit, t_list *list)
{
	int		nextsmall_fresh;
	t_node	*node;
	int		count;
	int		fifth;

	fifth = fifth_length(len);
	count = 1;
	node = list->head;
	while (count <= fifth)
	{
		nextsmall_fresh = list->head->data;
		while (node != NULL)
		{
			if (node->data < nextsmall_fresh && node->data > val_limit \
			&& node->data != smallest)
				nextsmall_fresh = node->data;
			node = node->next;
		}
		val_limit = nextsmall_fresh;
		count++;
	}
	return (val_limit);
}

void	algos_smallest_first_fifth(int len, t_list *list_a, t_list *list_b)
{
	int		smallest;
	int		val_limit;
	int		smallest_pos;

	smallest = find_smallest(list_a);
	smallest_pos = find_smallest_pos(list_a);
	val_limit = list_a->head->data;
	val_limit = find_val_limit(len, smallest, val_limit, list_a);
	while (smallest <= val_limit)
	{
		move_to_top(smallest, len, smallest_pos, list_a);
		pb_print(list_a, list_b);
		smallest = find_smallest(list_a);
		smallest_pos = find_smallest_pos(list_a);
	}
}
