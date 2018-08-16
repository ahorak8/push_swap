/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:40:30 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/16 13:40:32 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp_list;
	t_list *tmp;

	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	tmp_list = *begin_list;
	tmp = tmp_list->next;
	ft_list_reverse(&tmp);
	tmp_list->next->next = tmp_list;
	tmp_list->next = NULL;
	*begin_list = tmp;
}
