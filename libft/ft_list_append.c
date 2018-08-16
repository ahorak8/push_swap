/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 17:16:11 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/15 17:32:08 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*list_append(t_list *list, int val)
{
	t_node	*node;

	if (list != NULL)
	{
		node = (t_node *)malloc(sizeof(t_node));
		if (node != NULL)
		{
			node->data = val;
			list->next = NULL;
			if (list->tail == NULL)
			{
				node->prev = NULL;
				list->head = node;
				list->tail = node;
			}
			else
			{
				node->prev = list->tail;
				list->tail->next = node;
				list->tail = node;
			}
			list->len++;
		}
	}
	return (list);
}
