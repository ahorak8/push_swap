/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:40:00 by ahorak            #+#    #+#             */
/*   Updated: 2018/07/10 12:40:02 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strappend(char *src, char c)
{
	char	*str;
	char	*itr;

	str = malloc(sizeof(char *) * (ft_strlen(src) + 2));
	if (str)
	{
		itr = ft_stpcpy(str, src);
		*itr++ = c;
		*itr = '\0';
		free(src);
	}
	return (str);
}
