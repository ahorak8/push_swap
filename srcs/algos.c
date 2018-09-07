/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 14:53:00 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/27 12:53:29 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algos_smallest_first(int len, t_list *list)
{
	int		smallest;
	int		smallest_pos;

	smallest = find_smallest(list);
	smallest_pos = find_smallest_pos(list);
	move_to_top(smallest, len, smallest_pos, list);
}

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
	while (len > 4)
	{
		{
			algos_smallest_first(len, list_a);
			pb_print(list_a, list_b);
		}
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

// void	algos_large(int len, t_list *list_a, t_list *list_b)
// {
// 	int 	count;
// 	int		returned;
	
// 	count = 5;
// 	returned = 0;
// 	while (count >= 1)
// 	{
// 		algos_smallest_first_fifth(len, list_a, list_b);
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
// 	while (list_b->head != NULL)
// 		pa_print(list_a, list_b);
// }
