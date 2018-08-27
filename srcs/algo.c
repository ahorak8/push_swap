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
		write(1, "sa\n", 3);
	}
}

void	algos_len3(t_list *list_a, t_list *list_b)
{
	if (list_a->head->data > list_a->head->next->data)
		if (list_a->tail->data < list_a->head->next->data)
			{
				sa(list_a);
				rra(list_a);
				write(1, "sa\nrra\n", 7);
			}
}