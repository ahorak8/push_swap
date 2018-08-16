/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:32:27 by ahorak            #+#    #+#             */
/*   Updated: 2018/07/10 12:32:29 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str2;
	const char	*str1;

	str2 = dst;
	str1 = src;
	while (n > 0)
	{
		*str2++ = *str1++;
		n--;
	}
	return (dst);
}
