/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahorak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:24:20 by ahorak            #+#    #+#             */
/*   Updated: 2018/08/21 00:18:12 by ahorak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/includes/libft.h"

int		is_sorted(t_list *list_a, t_list *list_b);
int		is_sorted_list(t_list *list_a);

void	receive_instructions(t_list *list_a, t_list *list_b);
void	error(void);
void	error_check(int argc, char **argv);

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
void	pb_print(t_list *list_b, t_list *list_a);
void	ra_print(t_list *list_a);
void	rb_print(t_list *list_b);
void	rr_print(t_list *list_a, t_list *list_b);
void	sa_print(t_list *list_a);
void	sb_print(t_list *list_b);
void	ss_print(t_list *list_a, t_list *list_b);
void	rra_print(t_list *list_a);
void	rrb_print(t_list *list_b);
void	rrr_print(t_list *list_a, t_list *list_b);

int		is_backwards_list(t_list *list_a);

void	algos_len2(t_list *list_a);
void	algos_len3(t_list *list_a, t_list *list_b);
void	algos_len4(int len, t_list *list_a, t_list *list_b);
void	algos_len5(int len, t_list *list_a, t_list *list_b);

void	algos_smallest_first(int len, t_list *list_a);
void	algos_backwards(int len, t_list *list_a, t_list *list_b);

void	algos_small(int len, t_list *list_a, t_list *list_b);
void	algos_med(int len, t_list *list_a, t_list *list_b);
void	algos_large(int len, t_list *list_a, t_list *list_b);

#endif
