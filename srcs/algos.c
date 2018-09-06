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

int		half_length(int len)
{
	int		half;

	if (len % 2 == 0)
		half = len / 2;
	else
	{
		len = len - 1;
		half = len / 2;
	}
	return (half);
}

void	algos_smallest_first(int len, t_list *list_a)
{
	t_node 	*node;
	int		smallest;
	int		half;
	int		smallest_pos;

	smallest = list_a->head->data;
	node = list_a->head;
	half = half_length(len);
	smallest_pos = 1;
	while (node != NULL)
	{
		if (node->data < smallest)
		{
			smallest = node->data;
			smallest_pos++;
		}
		node = node->next;
	}
	while (list_a->head->data != smallest)
	{
		if (list_a->head->data != smallest && list_a->tail->data == smallest)
			rra_print(list_a);
		else if (list_a->head->data != smallest && list_a->head->next->data == smallest)
			sa_print(list_a);
		else if (list_a->head->data != smallest && list_a->tail->prev->data == smallest)
		{
			rra_print(list_a);
			rra_print(list_a);
		}
		else
			if (smallest_pos > half)
				rra_print(list_a);
			else if (smallest_pos <= half)
				ra_print(list_a);
	}
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
	int len2;

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
			
	// max = list_a->head;
	// while (max->next != NULL)
	// {
	// 	if (max->data < max->next->data)
	// 		max = max->next;
	// }

void	algos_large(int len, t_list *list_a, t_list *list_b)
{
	int len2;

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
