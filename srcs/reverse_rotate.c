/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:33:29 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/16 18:53:17 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_list *list_a)
{
	ft_list_prepend(list_a, list_a->tail->data);
	ft_list_del(list_a, list_a->tail);
	write(1, "rra\n", 4);
}

void	rrb(t_list *list_b)
{
	ft_list_prepend(list_b, list_b->tail->data);
	ft_list_del(list_b, list_b->tail);
	write(1, "rrb\n", 4);
}

void	rrr(t_list *list_a, t_list *list_b)
{
	ft_list_prepend(list_a, list_a->tail->data);
	ft_list_del(list_a, list_a->tail);
	ft_list_prepend(list_b, list_b->tail->data);
	ft_list_del(list_b, list_b->tail);
	write(1, "rrr\n", 4);
}
