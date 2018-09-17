/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <ahorak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:47:56 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/17 13:43:54 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;

	if (argc > 1)
	{
		list_b = ft_list_new();
		list_a = ft_list_new();
		list_a = get_args(argc, argv);
		error_check(argv, list_a);
		receive_instructions(list_a, list_b);
		if (is_sorted(list_a, list_b))
		{
			free_list(list_a);
			write(1, "OK\n", 3);
		}
		else
			write(1, "KO\n", 3);
	}
	else
		exit(1);
}
