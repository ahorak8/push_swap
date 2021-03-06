/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:33:14 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/16 18:52:56 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_list *list_a)
{
	ft_list_append(list_a, list_a->head->data);
	ft_list_del(list_a, list_a->head);
}

void	rb(t_list *list_b)
{
	ft_list_append(list_b, list_b->head->data);
	ft_list_del(list_b, list_b->head);
}

void	rr(t_list *list_a, t_list *list_b)
{
	ft_list_append(list_a, list_a->head->data);
	ft_list_del(list_a, list_a->head);
	ft_list_append(list_b, list_b->head->data);
	ft_list_del(list_b, list_b->head);
}
