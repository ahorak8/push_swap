/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:25:54 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/16 18:30:40 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	select_algos(int len, t_list *list_a, t_list *list_b)
{
	len = len - 1;
	if (len == 2)
		algos_len2(list_a, list_b);
	if (len == 3)
		algos_len3(list_a, list_b);
	if (len == 5)
		algos_len5(list_a, list_b);
	// else small, med, or large stack algos
}

int		main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;

	if (argc > 1)
	{
		list_a = ft_list_new();
		list_b = ft_list_new();
		argv++;
		while (*argv)
		{
			list_a = ft_list_append(list_a, ft_atoi(*argv));
			argv++;
		}
		if (is_sorted(list_a, list_b))
			exit(1);
		else
			select_algos(argc, list_a, list_b);
	}
	else
		exit(1);
}
