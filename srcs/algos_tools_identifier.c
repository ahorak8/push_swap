/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_tools_identifier.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <ahorak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 19:41:01 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/17 16:12:28 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		find_smallest(t_list *list)
{
	t_node	*node;
	int		smallest;

	node = list->head;
	smallest = list->head->data;
	while (node != NULL)
	{
		if (node->data < smallest)
			smallest = node->data;
		node = node->next;
	}
	return (smallest);
}

int		find_smallest_pos(t_list *list)
{
	t_node	*node;
	int		smallest;
	int		smallest_pos;

	node = list->head;
	smallest = list->head->data;
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
	return (smallest_pos);
}

int		find_biggest(t_list *list)
{
	t_node	*node;
	int		biggest;

	node = list->head;
	biggest = list->head->data;
	while (node != NULL)
	{
		if (node->data > biggest)
			biggest = node->data;
		node = node->next;
	}
	return (biggest);
}

int		find_biggest_pos(t_list *list)
{
	t_node	*node;
	int		biggest;
	int		biggest_pos;

	node = list->head;
	biggest = find_biggest(list);
	biggest_pos = 0;
	while (node->data != biggest)
	{
		node = node->next;
		biggest_pos++;
	}
	return (biggest_pos);
}
