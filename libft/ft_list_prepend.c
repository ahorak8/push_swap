/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_prepend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 17:51:21 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/15 17:51:36 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_list_prepend(t_list *list, int val)
{
	t_node	*node;

	if (list != NULL)
	{
		node = (t_node *)malloc(sizeof(t_node));
		if (node != NULL)
		{
			node->data = val;
			node->prev = NULL;
			if (list->head == NULL)
			{
				node->next = NULL;
				list->head = node;
				list->tail = node;
			}
			else
			{
				list->head->prev = node;
				node->next = list->head;
				list->head = node;
			}
			list->len++;
		}
	}
	return (list);
}
