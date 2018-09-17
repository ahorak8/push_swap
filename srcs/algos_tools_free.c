/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_tools_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <ahorak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:40:19 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/17 17:20:06 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_list(t_list *list)
{
	t_node	*current;

	current = list->head;
	while (current->next)
	{
		free(current);
		current = current->next;
	}
	free(current);
}

void	free_both_lists(t_list *list_a, t_list *list_b)
{
	free_list(list_a);
	free_list(list_b);
}
