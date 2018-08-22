/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 19:05:33 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/15 19:05:36 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_list_del(t_list *list, t_node *node)
{
	if (node->next == NULL && node->prev == NULL)
	{
		list->head = NULL;
		list->tail = NULL;
	}
	else if (node->prev == NULL)
	{
		list->head = node->next;
		list->head->prev = NULL;
	}
	else if (node->next == NULL)
	{
		list->tail = node->prev;
		list->tail->prev = node->prev;
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	free(node);
	node = NULL;
	list->len--;
	return (list);
}
