/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:42:58 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/16 13:43:00 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_list_sort(t_list *lst, int (*cmp)())
{
	void	*tempo;
	t_list	*overflow;

	overflow = lst;
	while (lst->next)
	{
		if (((*cmp)(lst->content, lst->next->content)) == 0)
		{
			tempo = lst->content;
			lst->content = lst->next->content;
			lst->next->content = tempo;
			lst = overflow;
		}
		else
			lst = lst->next;
	}
	lst = overflow;
	return (lst);
}
