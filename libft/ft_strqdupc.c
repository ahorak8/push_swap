/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strqdupc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:49:21 by ahorak            #+#    #+#             */
/*   Updated: 2018/07/10 12:49:23 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strqdupc(const char **s1, char c)
{
	char	*str;

	str = ft_strallocc(*s1, c);
	if (str)
		*s1 = ft_stpcpyc(str, *s1, c);
	return (str);
}
