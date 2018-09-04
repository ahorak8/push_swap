/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 12:52:20 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/04 14:14:47 by ahorak           ###   ########.fr       */
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

void	ra_print(t_list *list_a)
{
	ra(list_a);
	write(1, "ra\n", 3);
}

void	rb_print(t_list *list_b)
{
	rb(list_b);
	write(1, "rb\n", 3);
}

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

void	rr_print(t_list *list_a, t_list *list_b)
{
	rr(list_a, list_b);
	write(1, "rr\n", 3);
}

void	ss_print(t_list *list_a, t_list *list_b)
{
	ss(list_a, list_b);
	write(1, "ss\n", 3);
}

void	rrr_print(t_list *list_a, t_list *list_b)
{
	rrr(list_a, list_b);
	write(1, "rrr\n", 4);
}