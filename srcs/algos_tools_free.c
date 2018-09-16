#include "../includes/push_swap.h"

void  free_list(t_list *list)
{
	while (list->data)
	{
    free(list->data);
    list->data = list->data->next;
	}
	free(list->data);
}
