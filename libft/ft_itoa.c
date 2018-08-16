/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:29:43 by ahorak            #+#    #+#             */
/*   Updated: 2018/07/10 12:29:45 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	count_chars(int num)
{
	int		i;

	i = 1;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	while (num /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	ncpy;

	len = count_chars(n);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (n < 0)
		ncpy = -n;
	else
		ncpy = n;
	str[len] = '\0';
	str[--len] = ncpy % 10 + '0';
	while (ncpy /= 10)
		str[--len] = ncpy % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
