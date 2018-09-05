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

void	sa(t_list *list_a)
{
	t_node	*node;
	t_node	*current;

	if (list_a != NULL && list_a->head != NULL && list_a->head->next != NULL)
	{
		node = list_a->head;
		list_a->head = node->next;
		list_a->head->prev = NULL;
		node->prev = list_a->head;
		node->next = list_a->head->next;
		list_a->head->next = node;

		current = list_a->head;
		while (current->next != NULL)
		{
			current = current->next;
			if (current->next == NULL)
				list_a->tail = current;
		}
	}
}

void	sb(t_list *list_b)
{
	t_node	*node;
	t_node	*current;

	if (list_b != NULL && list_b->head != NULL && \
	list_b->head->next != NULL)
	{
		node = list_b->head;
		list_b->head = node->next;
		list_b->head->prev = NULL;
		node->prev = list_b->head;
		node->next = list_b->head->next;
		list_b->head->next = node;

		current = list_b->head;
		while (current->next != NULL)
		{
			current = current->next;
			if (current->next == NULL)
				list_b->tail = current;
		}
	}
}

void	ss(t_list *list_a, t_list *list_b)
{
	t_node	*node_a;
	t_node	*node_b;
	t_node	*current_a;
	t_node	*current_b;

	if (list_a != NULL && list_a->head != NULL && \
	list_a->head->next != NULL)
	{
		node_a = list_a->head;
		list_a->head = node_a->next;
		list_a->head->prev = NULL;
		node_a->prev = list_a->head;
		node_a->next = list_a->head->next;
		list_a->head->next = node_a;

		current_a = list_a->head;
		while (current_a->next != NULL)
		{
			current_a = current_a->next;
			if (current_a->next == NULL)
				list_a->tail = current_a;
		}
	}
	if (list_b != NULL && list_b->head != NULL && \
	list_b->head->next != NULL)
	{
		node_b = list_b->head;
		list_b->head = node_b->next;
		list_b->head->prev = NULL;
		node_b->prev = list_b->head;
		node_b->next = list_b->head->next;
		list_b->head->next = node_b;

		current_b = list_b->head;
		while (current_b->next != NULL)
		{
			current_b = current_b->next;
			if (current_b->next == NULL)
				list_b->tail = current_b;
		}
	}
}
