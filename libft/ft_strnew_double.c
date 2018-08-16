/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 12:07:45 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/01 12:07:55 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	**ft_strnew_double(size_t x, size_t y)
{
	char	**tab;
	char	*tab2;
	size_t	i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * y);
	tab2 = (char *)malloc(sizeof(char) * x * y);
	while (i < y)
	{
		tab[i] = &tab2[i * x];
		i++;
	}
	return (tab);
}
