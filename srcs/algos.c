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

void	algos_small(int len, t_list *list_a, t_list *list_b)
{
	t_node	*max;

	max = list_a->head;
	while (max->next != NULL)
	{
		if (max->data < max->next->data)
			max = max->next;
	}
	while (len > 3)
	{
		if (list_a->head->data < list_a->head->next->data)
			pb_print(list_a, list_b);
		else
		{	
			if (list_b->head->data < list_b->head->next->data)
				ss_print(list_a, list_b);
			else
				sa_print(list_a);
		}
		len--;
	}
	algos_len3(list_a, list_b);
}

void	algos_med(int len, t_list *list_a, t_list *list_b)
{
	
}

void	algos_large(int len, t_list *list_a, t_list *list_b)
{
	
}
