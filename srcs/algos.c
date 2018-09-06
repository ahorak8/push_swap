/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 14:53:00 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/27 12:53:29 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algos_smallest_first(int len, t_list *list)
{
	t_node	*node;
	int		smallest;
	int		smallest_pos;

	node = list->head;
	smallest = find_smallest(list);
	smallest_pos = find_smallest_pos(list);
	while (list->head->data != smallest)
	{
		move_to_top(smallest, len, smallest_pos, list);
	}
}

void	algos_biggest_first(int len, t_list *list)
{
	
}

void	algos_small(int len, t_list *list_a, t_list *list_b)
{
	int		len2;

	len2 = 0;
	while (len > 3)
	{
		algos_smallest_first(len, list_a);
		pb_print(list_a, list_b);
		len--;
		len2++;
	}
	algos_len3(list_a, list_b);
	while (len2 != 0)
	{
		pa_print(list_a, list_b);
		len2--;
	}
}

void	algos_med(int len, t_list *list_a, t_list *list_b)
{
	int		len2;

	len2 = 0;
	while (len > 3)
	{
		if (list_a->head->data < list_a->head->next->data)
			pb_print(list_a, list_b);
		else
		{
			algos_smallest_first(len, list_a);
			pb_print(list_a, list_b);
			if (list_a->head->data > list_a->head->next->data)
				sa_print(list_a);
		}
		len--;
		len2++;
	}
	algos_len3(list_a, list_b);
	while (len2 != 0)
	{
		pa_print(list_a, list_b);
		len2--;
	}
}

void	algos_large(int len, t_list *list_a, t_list *list_b)
{
	int count;

	count = 1;

		algos_smallest_first_fifth(len, list_a, list_b);
		
}
