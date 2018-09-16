/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 14:53:00 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/27 12:53:29 by ahorak           ###   ########.fr       */
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

void	algos_large(int len, t_list *list_a, t_list *list_b)
{
	int		count;
	int		returned;
	int		len2;
	
	len2 = fifth_length(len);
	count = 5;
	returned = 0;
	while (count != 1 && !is_sorted(list_a, list_b))
	{
		algos_smallest_first_fifth(len, list_a, list_b);
// 		count--;
// 		// malloc error in here:
// 		// while (list_b->head != NULL)
// 		// {
// 		// 	algos_biggest_first(len, list_b);
// 		// 	pa_print(list_a, list_b);
// 		// 	returned++;
// 		// }
// 		while (returned > 0)
// 		{
// 			pb_print(list_a, list_b);
// 			returned--;
// 		}
// 	}
// 	while (len > 3)
// 	{
// 		algos_smallest_first(len, list_a);
// 		if (list_a->head != NULL)
// 		{	
// 			// pb_print(list_a, list_b);
// 			len--;
// 		}
// 	}
// 	algos_len3(list_a, list_b);
	while (list_b->head != NULL)
		pa_print(list_a, list_b);
}
