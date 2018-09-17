/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <ahorak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 18:53:09 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/17 13:26:31 by ahorak           ###   ########.fr       */
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

int		is_duplicates(t_list *list)
{
	int			curr;
	t_node		*node;
	t_node		*tmp;

	if (!list)
		return (0);
	node = list->head;
	tmp = list->head;
	curr = node->data;
	while (tmp)
	{
		node = tmp;
		curr = tmp->data;
		while (node->next)
		{
			if (curr == node->next->data)
				return (1);
			node = node->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

void	error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

void	error_check(char **argv, t_list *list)
{
	if ((is_duplicates(list) == 1))
		error();
	argv++;
	while (*argv)
	{
		if (ft_atol(*argv) > 2147483647 || ft_atol(*argv) < -2147483647)
			error();
		if ((is_not_digit(*argv)) == 1)
			error();
		argv++;
	}
}
