/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_op_reverserotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:52:34 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/06 20:52:36 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra_print(t_list *list_a)
{
	rra(list_a);
	write(1, "rra\n", 4);
}

void	rrb_print(t_list *list_b)
{
	rrb(list_b);
	write(1, "rrb\n", 4);
}

void	rrr_print(t_list *list_a, t_list *list_b)
{
	rrr(list_a, list_b);
	write(1, "rrr\n", 4);
}
