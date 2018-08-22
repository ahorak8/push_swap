/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:47:56 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/20 23:58:07 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

int		is_not_digit(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] != '-' && str[i] != '+' && \
		(!(ft_isdigit(str[i]))) && (!(ft_isspace(str[i]))))
			return (0);
		i++;
	}
	return (1);
}

int		is_duplicates(int ac, char **av)
{
	int i;
	int j;
	int test;

	i = 1;
	while (i < ac)
	{
		test = ft_atoi(av[i]);
		j = i;
		while (j < ac - 1)
		{
			if (test == ft_atoi(av[j + 1]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
	{
		t_list	*list_a;
		t_list	*list_b;

		list_a = ft_list_new();
		list_b = ft_list_new();
		if ((is_duplicates(argc, argv)) == 0)
		{
			write(1, "Error: Duplicates.\n", 19);
			exit(1);
		}
		argv++;
		while (*argv) //filling list_a
		{
			if (ft_atoi(*argv) > 2147483647 || ft_atoi(*argv) < -2147483647)
			{
				write(1, "Error: Greater than MAXINT\n", 27);
				exit(1);
			}
			list_a = ft_list_append(list_a, ft_atoi(*argv));
			argv++;
		}
		// read push_swap outputted instructions or read inputted instructions
		if (is_sorted(list_a))
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
	else
		exit(1);
}
