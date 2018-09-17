/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <ahorak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:25:54 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/17 17:08:47 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	select_algos(t_list *list_a, t_list *list_b)
{
	int len;

	len = find_list_length(list_a);
	if (len == 2)
		algos_len2(list_a);
	else if (len == 3)
		algos_len3(list_a);
	else if (len == 4)
		algos_len4(len, list_a, list_b);
	else if (is_backwards_list(list_a) == 1)
		algos_backwards(len, list_a, list_b);
	else if (len > 4 && len <= 10)
		algos_small(len, list_a, list_b);
	else if (len > 10 && len <= 100)
		algos_med(len, list_a, list_b);
	else if (len > 100)
		algos_large(list_a, list_b);
}

int		main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;

	if (argc > 1)
	{
		list_a = get_args(argc, argv);
		error_check(argv, list_a);
		list_b = ft_list_new();
		if (is_sorted(list_a, list_b))
			exit(1);
		else
			select_algos(list_a, list_b);
	}
	else
		exit(1);
}
