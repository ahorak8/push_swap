/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:33:20 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/23 20:31:38 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_list *list)
{
	t_node	*node;
	t_node	*current;

	node = list->head;
	list->head = node->next;
	list->head->prev = NULL;
	node->prev = list->head;
	node->next = list->head->next;
	list->head->next = node;
	current = list->head;
	while (current->next != NULL)
	{
		current = current->next;
		if (current->next == NULL)
			list->tail = current;
	}
}

void	sa(t_list *list_a)
{
	if (list_a != NULL && list_a->head != NULL && list_a->head->next != NULL)
		swap(list_a);
}

void	sb(t_list *list_b)
{
	if (list_b != NULL && list_b->head != NULL && list_b->head->next != NULL)
		swap(list_b);
}

void	ss(t_list *list_a, t_list *list_b)
{
	if (list_a != NULL && list_a->head != NULL && list_a->head->next != NULL)
		swap(list_a);
	if (list_b != NULL && list_b->head != NULL && list_b->head->next != NULL)
		swap(list_b);
}
