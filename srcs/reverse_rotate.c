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

// void	rra(t_list *list_a)
// {
// 	ft_list_prepend(list_a, list_a->tail->data);
// 	ft_list_del(list_a, list_a->tail);
// }

// void	rrb(t_list *list_b)
// {
// 	ft_list_prepend(list_b, list_b->tail->data);
// 	ft_list_del(list_b, list_b->tail);
// }

// void	rrr(t_list *list_a, t_list *list_b)
// {
// 	ft_list_prepend(list_a, list_a->tail->data);
// 	ft_list_del(list_a, list_a->tail);
// 	ft_list_prepend(list_b, list_b->tail->data);
// 	ft_list_del(list_b, list_b->tail);
// }

void	reverse_rotate(t_list *lst)
{
	ft_list_prepend(lst, lst->tail->data);
	ft_list_del(lst, lst->tail);
}

void		rra(t_list *list_a)
{
	reverse_rotate(list_a);
}

void		rrb(t_list *list_b)
{
	reverse_rotate(list_b);
}

void		rrr(t_list *list_a, t_list *list_b)
{
	if (list_a != NULL && list_a->head != NULL && \
	list_a->head->next != NULL)
		reverse_rotate(list_a);
	if (list_b != NULL && list_b->head != NULL && \
	list_b->head->next != NULL)
		reverse_rotate(list_b);
}