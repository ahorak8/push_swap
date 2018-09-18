/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algos_tools_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <ahorak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:40:19 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/18 16:09:15 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_list(t_list *list)
{
	t_node	*current;

	current = list->head;
	if (current == NULL)
		free(current);
	else
	{
		while (current != NULL)
		{
			free(current);
			current = current->next;
		}
	}
	free(list);
}

void	free_both_lists(t_list *list_a, t_list *list_b)
{
	free_list(list_a);
	free_list(list_b);
}

void	free_array(char ***stack)
{
	char	**array;

	array = *stack;
	while (*array)
	{
		free(*array);
		array++;
	}
	free(*stack);
}
