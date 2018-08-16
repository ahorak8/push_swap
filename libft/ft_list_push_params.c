/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:38:11 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/16 13:38:17 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	list = NULL;
	i = 1;
	if (ac)
		while (i < ac)
		{
			ft_list_push_front(&list, av[i]);
			i++;
		}
	return (list);
}
