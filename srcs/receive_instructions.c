/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   receive_instructions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 19:31:37 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/23 20:26:28 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_instructions(char *str, t_list *list_a, t_list *list_b)
{
	if (ft_strcmp(str, "pa") == 0)
		pa(list_a, list_b);
	else if (ft_strcmp(str, "pb") == 0)
		pb(list_a, list_b);
	else if (ft_strcmp(str, "sa") == 0)
		sa(list_a);
	else if (ft_strcmp(str, "sb") == 0)
		sb(list_b);
	else if (ft_strcmp(str, "ss") == 0)
		ss(list_a, list_b);
	else if (ft_strcmp(str, "ra") == 0)
		ra(list_a);
	else if (ft_strcmp(str, "rb") == 0)
		rb(list_b);
	else if (ft_strcmp(str, "rr") == 0)
		rr(list_a, list_b);
	else if (ft_strcmp(str, "rra") == 0)
		rra(list_a);
	else if (ft_strcmp(str, "rrb") == 0)
		rrb(list_b);
	else if (ft_strcmp(str, "rrr") == 0)
		rrr(list_a, list_b);
	else
		error();
}

void	receive_instructions(t_list *list_a, t_list *list_b)
{
	char	*str;

	while (get_next_line(0, &str))
		check_instructions(str, list_a, list_b);
}
