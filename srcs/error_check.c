/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 18:53:09 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/07 18:53:31 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
			return (1);
		i++;
	}
	return (0);
}

int		is_duplicates(int ac, char **av) //array of argv
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
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

int		error_check(char **argv)
{
	// if ((is_duplicates(argc, argv)) == 1)
	// 	error();
	while (*argv)
	{
		if (ft_atol(*argv) > 2147483647 || ft_atol(*argv) < -2147483647)
			return (0);
		if ((is_not_digit(*argv)) == 1)
			return(0);
		argv++;
	}
}
