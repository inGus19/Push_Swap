/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:17:05 by acaes             #+#    #+#             */
/*   Updated: 2024/12/12 12:34:32 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Ultimate/inc/ultimate.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stddef.h>

// ----- Structure pour un nœud -----
typedef struct s_node
{
	int		value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

// ----- Structure pour la pile -----
typedef struct s_stack
{
	t_node	*top;
	t_node	*bot;
	int		size;
}	t_stack;

// ----- Validation des arguments -----
int		parse_arguments(int argc, char **argv, t_stack *stack);
int		is_number(char *str);
int		is_unique(int value, t_stack *stack);
int		ft_atoi(const char *str);

// ----- Manipulation des nœuds -----
t_node	*dlst_new(int value);
t_node	*find_max_node(t_stack *stack);
void	move_to_top(t_stack *stack, t_node *node);

// ----- Manipulation des piles -----
void	dlst_init(t_stack *stack);
void	dlst_add_front(t_stack *stack, t_node *new_node);
void	dlst_add_back(t_stack *stack, t_node *new_node);
t_node	*dlst_remove_front(t_stack *stack);
t_node	*dlst_remove_back(t_stack *stack);
void	free_dlst(t_stack *stack);
int		is_sorted(t_stack *stack);

// ----- Fonctions de manipulation des mouvements -----
void	swapy(t_stack *stack);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pushy(t_stack *push, t_stack *pull);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *b, t_stack *a);
void	rotate(t_stack *stack);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	reverse(t_stack *stack);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

// ----- Trie des piles -----
int		find_median(int *tab, int size);
int		stack_to_tab(t_stack *stack, int *tab);
void	sort_tab(int *tab, int size);
void	push_chunk(t_stack *a, t_stack *b, int pivot);
void	back_to_a(t_stack *a, t_stack *b);

// ----- Algorythmes -----
void	sort_three(t_stack *a);
void	big_sort(t_stack *a, t_stack *b);
void	push_swap(t_stack *a, t_stack *b);

#endif
