/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:33:29 by ahorak            #+#    #+#             */
/*   Updated: 2018/07/10 12:33:30 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	t_byte *str;

	str = (t_byte *)b;
	while (len-- > 0)
		*str++ = (t_byte)c;
	return (b);
}
