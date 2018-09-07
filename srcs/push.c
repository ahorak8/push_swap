/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:45:39 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/06 20:45:43 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_list *list_a, t_list *list_b)
{
	if (list_b != NULL && list_b->head != NULL)
	{
		ft_list_prepend(list_a, list_b->head->data);
		ft_list_del(list_b, list_b->head);
	}
}

void	pb(t_list *list_a, t_list *list_b)
{
	if (list_a != NULL && list_a->head != NULL)
	{
		ft_list_prepend(list_b, list_a->head->data);
		ft_list_del(list_a, list_a->head);
	}
}
