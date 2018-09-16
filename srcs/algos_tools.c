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

void	algos_smallest_first(int len, t_list *list)
{
	int		smallest;
	int		smallest_pos;

	smallest = find_smallest(list);
	smallest_pos = find_smallest_pos(list);
	move_to_top(smallest, len, smallest_pos, list);
}

void	algos_biggest_first(int len, t_list *list)
{
	t_node	*node;
	int		biggest;
	int		biggest_pos;

	len = fifth_length(len);
	node = list->head;
	biggest = find_biggest(list);
	biggest_pos = find_biggest_pos(list);
	move_to_top(biggest, len, biggest_pos, list);
}

void	move_to_top(int size, int len, int position, t_list *list)
{
	int		half;

	while (list->head->data != size)
	{
		if (list->head->data != size && list->tail->data == size)
			rra_print(list);
		else if (list->head->data != size && list->head->next->data == size \
		&& list->head->next->next->data > list->head->data)
			sa_print(list);
		else if (list->head->data != size && list->tail->prev->data == size)
		{
			rra_print(list);
			rra_print(list);
		}
		else 
		{
			while (list->head->data != size)
			{
				len = find_list_length(list);
				half = half_length(len);
				if (position > half)
					rra_print(list);
				else if (position <= half)
					ra_print(list);
				len++;
			}
		}
	}
}
