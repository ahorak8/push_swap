/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:54:42 by ahorak            #+#    #+#             */
/*   Updated: 2018/07/31 20:54:51 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_create_elem(void *content)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(*list));
	list->content = content;
	list->next = NULL;
	return (list);
}
