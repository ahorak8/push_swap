/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:15:57 by ahorak            #+#    #+#             */
/*   Updated: 2018/09/17 17:16:10 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"

int		is_sorted(t_list *list_a, t_list *list_b);
int		is_sorted_list(t_list *list);

int		find_smallest(t_list *list);
int		find_smallest_pos(t_list *list);
int		find_biggest(t_list *list);
int		find_biggest_pos(t_list *list);

int		find_list_length(t_list *list);
int		half_length(int len);
int		fifth_length(int len);

int		is_backwards_list(t_list *list_a);

void	move_to_top(int size, int len, int smallest_pos, t_list *list);
void	algos_biggest_first(int len, t_list *list);
void	algos_smallest_first(int len, t_list *list);
void	algos_smallest_first_fifth(int len, t_list *list_a, t_list *list_b);
void	algos_backwards(int len, t_list *list_a, t_list *list_b);

t_list	*get_args(int len, char **argv);

void	receive_instructions(t_list *list_a, t_list *list_b);
void	error(void);
void	free_list(t_list *list);
void	error_check(char **argv, t_list *list);

void	pa(t_list *list_a, t_list *list_b);
void	pb(t_list *list_b, t_list *list_a);
void	ra(t_list *list_a);
void	rb(t_list *list_b);
void	rr(t_list *list_a, t_list *list_b);
void	sa(t_list *list_a);
void	sb(t_list *list_b);
void	ss(t_list *list_a, t_list *list_b);
void	rra(t_list *list_a);
void	rrb(t_list *list_b);
void	rrr(t_list *list_a, t_list *list_b);

void	pa_print(t_list *list_a, t_list *list_b);
void	pb_print(t_list *list_a, t_list *list_b);
void	ra_print(t_list *list_a);
void	rb_print(t_list *list_b);
void	rr_print(t_list *list_a, t_list *list_b);
void	sa_print(t_list *list_a);
void	sb_print(t_list *list_b);
void	ss_print(t_list *list_a, t_list *list_b);
void	rra_print(t_list *list_a);
void	rrb_print(t_list *list_b);
void	rrr_print(t_list *list_a, t_list *list_b);
void	list_print(t_list *list);
void	print_stacks(t_list *list_a, t_list *list_b);

void	algos_len2(t_list *list_a);
void	algos_len3(t_list *list_a);
void	algos_len4(int len, t_list *list_a, t_list *list_b);
void	algos_len5(int len, t_list *list_a, t_list *list_b);

void	algos_small(int len, t_list *list_a, t_list *list_b);
void	algos_med(int len, t_list *list_a, t_list *list_b);
void	algos_large(t_list *list_a, t_list *list_b);

int		get_first(t_list *list);
int		get_second(t_list *list);
int		get_last(t_list *list);
void	move_list_b_to_a(t_list *list_a, t_list *list_b);

#endif
