/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_op_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:52:17 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/06 20:52:21 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rb_print(t_list *list_b)
{
	rb(list_b);
	write(1, "rb\n", 3);
}

void	rr_print(t_list *list_a, t_list *list_b)
{
	rr(list_a, list_b);
	write(1, "rr\n", 3);
}

void	ra_print(t_list *list_a)
{
	ra(list_a);
	write(1, "ra\n", 3);
}
