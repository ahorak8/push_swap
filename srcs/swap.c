/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:33:20 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/20 20:28:52 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_list *list_a)
{
	if (!(list_a == NULL || list_a->head == NULL || list_a->head->next == NULL))
	{
		t_node	*node;

		node = list_a->head;
		list_a->head = node->next;
		list_a->head->prev = NULL;
		node->prev = list_a->head;
		node->next = list_a->head->next;
		list_a->head->next = node;
		node->next->prev = node;
	}
}

void	sb(t_list *list_b)
{
	if (!(list_b == NULL || list_b->head == NULL || \
	list_b->head->next == NULL))
	{
		t_node	*node;

		node = list_b->head;
		list_b->head = node->next;
		list_b->head->prev = NULL;
		node->prev = list_b->head;
		node->next = list_b->head->next;
		list_b->head->next = node;
		node->next->prev = node;
	}
}

void	ss(t_list *list_a, t_list *list_b)
{
	if (!(list_a == NULL || list_a->head == NULL || \
	list_a->head->next == NULL) && !(list_b == NULL || \
	list_b->head == NULL || list_b->head->next == NULL))
	{
		t_node	*node_a;
		t_node	*node_b;

		node_a = list_a->head;
		list_a->head = node_a->next;
		list_a->head->prev = NULL;
		node_a->prev = list_a->head;
		node_a->next = list_a->head->next;
		list_a->head->next = node_a;
		node_a->next->prev = node_a;
		node_b = list_b->head;
		list_b->head = node_b->next;
		list_b->head->prev = NULL;
		node_b->prev = list_b->head;
		node_b->next = list_b->head->next;
		list_b->head->next = node_b;
		node_b->next->prev = node_b;
	}
}
