/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <ahorak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:41:32 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/17 17:17:04 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	list_print(t_list *list)
{
	t_node *temp;

	if (list != NULL)
	{
		temp = list->head;
		while (temp)
		{
			ft_putnbr(temp->data);
			if (temp->next != NULL)
				ft_putstr(" - ");
			temp = temp->next;
		}
	}
}

void	print_stacks(t_list *list_a, t_list *list_b)
{
	ft_putstr("Stack A: ");
	list_print(list_a);
	ft_putstr("\nStack B: ");
	list_print(list_b);
	ft_putstr("\n");
}
