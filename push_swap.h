/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:17:05 by acaes             #+#    #+#             */
/*   Updated: 2024/12/11 13:10:10 by acaes            ###   ########.fr       */
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

// ----- Manipulation des nœuds -----
t_node	*dlst_new(int value);

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

// ----- Validation des arguments -----
int		parse_arguments(int argc, char **argv, t_stack *stack);
int		is_number(char *str);
int		is_unique(int value, t_stack *stack);
int		ft_atoi(const char *str);

// ----- Trie des piles -----
void	sort_three(t_stack *a);

// ----- Utilitaires -----

#endif
