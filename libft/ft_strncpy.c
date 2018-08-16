/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:48:27 by ahorak            #+#    #+#             */
/*   Updated: 2018/07/10 12:48:29 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s2;
	size_t	i;

	s2 = dst;
	i = -1;
	while (++i < len)
		if (*src)
			*s2++ = *src++;
		else
			while (i++ < len)
				*s2++ = '\0';
	return (dst);
}
