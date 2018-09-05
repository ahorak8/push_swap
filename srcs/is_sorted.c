/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 18:16:25 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/23 20:31:24 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		is_sorted(t_list *list_a, t_list *list_b)
{
	t_node	*node;

	node = list_a->head;
	if (list_a->head->data == list_a->tail->data)
		if (list_b->head == NULL)
			return (1);
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	if (list_b->head != NULL)
		return (0);
	else
		return (1);
}

int		is_sorted_list(t_list *list_a)
{
	t_node	*node;

	node = list_a->head;
	if (list_a->head->data == list_a->tail->data)
		return (1);
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (1);
}
