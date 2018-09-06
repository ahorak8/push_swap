/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_tools_length.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 23:27:00 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/06 23:27:02 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		half_length(int len)
{
	int		half;

	if (len % 2 == 0)
		half = len / 2;
	else
	{
		len = len - 1;
		half = len / 2;
	}
	return (half);
}

int		fifth_length(int len)
{
	int		fifth;

	if (len % 5 == 0)
		fifth = len / 5;
	else
	{
		while (len % 5 != 0)
			len = len - 1;
		fifth = len / 5;
	}
	return (fifth);
}
