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
	if (len == 4)
		algos_len4(list_a, list_b);
	if (is_backwards_list(list_a) == 1)
		algos_backwards(len, list_a, list_b);
	if (len > 4 && len <= 10)
		algos_small(list_a, list_b);
	if (len > 10 && len <= 100)
		algos_med(list_a, list_b);
	if (len > 100)
		algos_large(list_a, list_b);
}

int		main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;

	if (argc > 1)
	{
		error_check(argc, argv);
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
