/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <ahorak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 14:53:00 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/17 14:48:20 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algos_small(int len, t_list *list_a, t_list *list_b)
{
	int		len2;

	len2 = 0;
	while (len > 3)
	{

		algos_smallest_first(len, list_a);
		pb_print(list_a, list_b);
		len--;
		len2++;
	}
	algos_len3(list_a);
	while (len2 != 0)
	{
		pa_print(list_a, list_b);
		len2--;
	}
}

void	algos_med(int len, t_list *list_a, t_list *list_b)
{
	int		len2;

	len2 = 0;
	while (len > 3)
	{
		{
			algos_smallest_first(len, list_a);
			pb_print(list_a, list_b);
			if (is_sorted_list(list_a))
				break ;
		}
		len--;
		len2++;
	}
	algos_len3(list_a);
	while (len2 != 0) //&& list_b != NULL) 
	{
		pa_print(list_a, list_b);
		len2--;
	}
}

void	algos_large(t_list *list_a, t_list *list_b)
{
	int		store;

	while (!(is_sorted_list(list_a)) || ft_list_len(list_b) != 0)
	{
		if (get_first(list_a) > get_second(list_a))
			sa_print(list_a);
		else if (get_first(list_a) > get_last(list_a))
			rra_print(list_a);
		else if (get_first(list_a) < get_last(list_b))
			pb_print(list_a, list_b);
		else if (get_first(list_a) < get_first(list_b))
		{
			store = get_first(list_a);
			ra_print(list_a);
			while (get_first(list_b) > store)
				pa_print(list_a, list_b);
			rra_print(list_a);
		}
		else if (is_sorted_list(list_a) && \
		get_first(list_a) > get_first(list_b) && get_first(list_b) != 0)
			move_list_b_to_a(list_a, list_b);
		else
			pb_print(list_a, list_b);
	}
}
