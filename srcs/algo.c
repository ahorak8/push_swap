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
		sa_print(list_a);
}

void	algos_len3(t_list *list_a, t_list *list_b)
{
	if (list_a->head->data < list_a->head->next->data)
	{
		rra_print(list_a);
		if (is_sorted(list_a, list_b) == 0)
			sa_print(list_a);	
	}
	else if (list_a->head->data > list_a->head->next->data)
	{
		if (list_a->head->data > list_a->tail->data)
		{
			ra_print(list_a);
			if (is_sorted(list_a, list_b) == 0)
				sa_print(list_a);
		}
		else
			sa_print(list_a);
	}
}

void	algos_len4(t_list *list_a, t_list *list_b)
{

}

void	algos_len5(t_list *list_a, t_list *list_b) //backwards list
{
	if (list_a->head->data > list_a->head->next->data && \
	list_a->head->next->data > list_a->head->next->next->data && \
	list_a->head->next->next->data > list_a->head->next->next->next->data && \
	list_a->tail->data < list_a->head->next->next->next->data)
	{
		pb_print(list_a, list_b);
		pb_print(list_a, list_b);
		ss_print(list_a, list_b);
		rra_print(list_a);
		pa_print(list_a, list_b);
		pa_print(list_a, list_b);
		ra_print(list_a);
		ra_print(list_a);
	}
	else
		write(1, "algos", 4);
}

int		is_backwards_list(t_list *list_a)
{
	t_node	*current;

	current = list_a->head;
	while (current->data > current->next->data)
	{
		current = current->next;
		if (current == list_a->tail)
			return (1);
	}
	return (0);
}

void	algos_backwards(t_list *list_a, t_list *list_b)
{

}

void	algos_small(t_list *list_a, t_list *list_b)
{
	
}

void	algos_med(t_list *list_a, t_list *list_b)
{
	
}

void	algos_large(t_list *list_a, t_list *list_b)
{
	
}
