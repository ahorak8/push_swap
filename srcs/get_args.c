/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 18:25:16 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/07 18:25:32 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list		*get_args(int len, char **argv)
{
	t_list	*list;
	char	**split;
	int		i;
	int		j;

	i = 0;
	list = NULL; //ft_list_new();
	while (argv[i])
	{
		split = ft_strsplit(argv[i], ' ');
		j = 0;
		while (argv[j])
		{
			if (error_check(argv[j]) == 1)
				list = ft_list_append(list, ft_atol(split[j]));
			else 
				error();
			j++;
		}
		i++;
		ft_strdel(split);
	}
	// while (++i < len)
	// {
	// 	j = -1;
	// 	split = ft_strsplit(argv[i], ' ');
	// 	while (split[++j] != NULL)
	// 	{
	// 		printf("Split [%d]%s \n", j, split[j]);
	// 		list = ft_list_append(list, ft_atoi(split[j]));
	// 	}
	// 	ft_strdel(split);
	// }
	// list_print(list);
	return (list);
}