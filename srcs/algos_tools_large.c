/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_tools_large.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 19:41:20 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/06 19:41:22 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_val_limit(int len, int smallest, t_list *list)
{
	int		fifth;
	int 	val_limit;
	t_node	*node;
	int		current_smallest;
	int		count;

	fifth = fifth_length(len);
	node = list->head;
	count = 0;
	while (count <= fifth)
	{
		current_smallest = list->head->data; 
		while (node != NULL)
		{
			if (node->data < current_smallest && node->data > smallest)
			{
				current_smallest = node->data;
			}
			node = node->next;
		}
		smallest = current_smallest;
		count++;
	}
	val_limit = smallest;
	return (val_limit);
}

void	algos_smallest_first_fifth(int len, t_list *list_a, t_list *list_b)
{
	int		smallest;
	int		val_limit;
	int		smallest_pos;
	int		count;

	count = 0;
	smallest = find_smallest(list_a);
	smallest_pos = find_smallest_pos(list_a);
	val_limit = list_a->head->data;
	val_limit = find_val_limit(len, smallest, list_a);
	while (smallest <= val_limit)
	{
		move_to_top(smallest, len, smallest_pos, list_a);
		pb_print(list_a, list_b);
		smallest = find_smallest(list_a);
		smallest_pos = find_smallest_pos(list_a);
		count++;
		if (count >= val_limit)
			break ;
	}
}
