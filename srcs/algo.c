/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 14:53:00 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/27 12:53:29 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algos_len2(t_list *list_a, t_list *list_b)
{
	if (list_a->head->data > list_a->head->next->data)
	{
		sa(list_a);
		write(1, "sa\n", 4);
	}
}

void	algos_len3(t_list *list_a, t_list *list_b)
{
	if (list_a->head->data < list_a->head->next->data)
	{
		rra(list_a);
		write(1, "rra\n", 4);
		if (is_sorted(list_a, list_b) == 0)
		{
			sa(list_a);
			write(1, "sa\n", 3);
		}
	}
	else if (list_a->head->data > list_a->head->next->data)
	{
		if (list_a->head->data > list_a->tail->data)
		{
			ra(list_a);
			write(1, "ra\n", 3);
			if (is_sorted(list_a, list_b) == 0)
			{
				sa(list_a);
				write(1, "sa\n", 3);
			}
		}
		else
		{
				sa(list_a);
				write(1, "sa\n", 3);
			}
	}
}

void	algos_len5(t_list *list_a, t_list *list_b)
{
	if (list_a->head->data > list_a->head->next->data && \
	list_a->head->next->data > list_a->head->next->next->data && \
	list_a->head->next->next->data > list_a->head->next->next->next->data && \
	list_a->tail->data < list_a->head->next->next->next->data)
	{
		pb(list_a, list_b);
		write(1, "pb\n", 3);
		pb(list_a, list_b);
		write(1, "pb\n", 3);
		ss(list_a, list_b);
		write(1, "ss\n", 3);
		rra(list_a);
		write(1, "rra\n", 4);
		pa(list_a, list_b);
		write(1, "pa\n", 3);
		pa(list_a, list_b);
		write(1, "pa\n", 3);
		ra(list_a);
		write(1, "ra\n", 3);
		ra(list_a);
		write(1, "ra\n", 3);
	}
	else
		write(1, "boop", 4);
}
