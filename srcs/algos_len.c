/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 14:53:00 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/27 12:53:29 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algos_len2(t_list *list_a)
{
	while (list_a != NULL)
	{
		if (is_sorted_list(list_a))
			break ;
		if (list_a->head->data > list_a->head->next->data)
			sa_print(list_a);
	}
}

void	algos_len3(t_list *list_a)
{
	while (list_a != NULL)
	{
		if (is_sorted_list(list_a))
			break ;
		else if (list_a->head->data < list_a->head->next->data)
		{
			rra_print(list_a);
			if (is_sorted_list(list_a) == 0)
				sa_print(list_a);
		}
		else if (list_a->head->data > list_a->head->next->data)
		{
			if (list_a->head->data > list_a->tail->data)
			{
				ra_print(list_a);
				if (is_sorted_list(list_a) == 0)
					sa_print(list_a);
			}
			else
				sa_print(list_a);
		}
	}
}

void	algos_len4(int len, t_list *list_a, t_list *list_b)
{
	if (is_backwards_list(list_a) == 1)
	{
		sa_print(list_a);
		rra_print(list_a);
		rra_print(list_a);
		sa_print(list_a);
	}
	else
		algos_small(len, list_a, list_b);
}
