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

void	algos_smallest_first_fifth(int len, t_list *list_a)
{
	t_node	*node;
	int		smallest;
	int		nextsmall_fresh;
	int		nextsmall_save;
	int		count;
	int		fifth;
	int		smallest_pos;

	fifth = fifth_length(len);
	smallest = find_smallest(list_a);
	smallest_pos = find_smallest_pos(list_a);
	count = 1;
	nextsmall_save = list_a->head->data;
	node = list_a->head;
	while (count <= fifth)
	{
		nextsmall_fresh = list_a->head->data;
		while (node != NULL)
		{
			if (node->data < nextsmall_fresh && node->data > nextsmall_save \
			&& node->data != smallest)
				nextsmall_fresh = node->data;
			node = node->next;
		}
		nextsmall_save = nextsmall_fresh;
		count++;
	}
	while (list_a->head->data != nextsmall_save)
	{
		move_to_top(smallest, len, smallest_pos, list_a);
		smallest = find_smallest(list_a);
		smallest_pos = find_smallest_pos(list_a);
	}
}
