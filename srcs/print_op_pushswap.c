/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_op_pushswap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:52:26 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/06 20:52:27 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa_print(t_list *list_a, t_list *list_b)
{
	pa(list_a, list_b);
	write(1, "pa\n", 3);
}

void	pb_print(t_list *list_a, t_list *list_b)
{
	pb(list_a, list_b);
	write(1, "pb\n", 3);
}

void	sa_print(t_list *list_a)
{
	sa(list_a);
	write(1, "sa\n", 3);
}

void	sb_print(t_list *list_b)
{
	sa(list_b);
	write(1, "sb\n", 3);
}

void	ss_print(t_list *list_a, t_list *list_b)
{
	ss(list_a, list_b);
	write(1, "ss\n", 3);
}
