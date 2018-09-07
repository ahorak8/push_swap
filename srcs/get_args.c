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
	t_list	*ret;
	t_list	*temp;
	char	**split;
	int		i;
	int		j;

	i = 0;
	ret = ft_list_new();
	while (++i < len)
	{
		j = -1;
		split = ft_strsplit(argv[i], ' ');
		while (split[++j] != NULL)
		{
			printf("Split [%d]%s \n", j, split[j]);
			ret = ft_list_append(ret, ft_atoi(split[j]));
		}
		ft_strdel(split);
	}
	list_print(ret);
	return (ret);
}