/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <ahorak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:35:52 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/17 14:26:48 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_list_len(t_list *begin_list)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = begin_list->head;
	if (tmp)
	{
		while (tmp)
		{
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}
