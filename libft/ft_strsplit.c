/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <ahorak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:49:37 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/17 17:21:13 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strclen(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	int		w_len;
	int		w_count;
	int		i;
	char	**full;

	i = 0;
	if (!s)
		return (NULL);
	w_count = ft_amount_of_words(s, c);
	full = (char**)malloc(sizeof(char*) * (w_count + 1));
	if (!full)
		return (NULL);
	while (*s == c)
		s++;
	while (*s)
	{
		w_len = ft_strclen(s, c);
		full[i++] = ft_strsub(s, 0, w_len);
		s += w_len;
		while (*s && *s == c)
			s++;
	}
	full[i] = NULL;
	return (full);
}
