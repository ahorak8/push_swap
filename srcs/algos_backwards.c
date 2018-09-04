#include "../includes/push_swap.h"

int		is_backwards_list(t_list *list_a)
{
	t_node	*current;

	current = list_a->head;
	while (current->data > current->next->data)
	{
		current = current->next;
		if (current == list_a->tail)
			return (1);
	}
	return (0);
}

void	algos_backwards(int len, t_list *list_a, t_list *list_b)
{
	while (len > 3)
	{
		pb_print(list_a, list_b);
		len--;
	}
	sa_print(list_a);
	rra_print(list_a);
	while (list_b->head != NULL)
	{
		pa_print(list_a, list_b);
		ra_print(list_a);
	}
}