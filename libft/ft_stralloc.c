/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stralloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:39:31 by ahorak            #+#    #+#             */
/*   Updated: 2018/07/10 12:39:33 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_stralloc(const char *s)
{
	return (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s)
		return (NULL);
}
