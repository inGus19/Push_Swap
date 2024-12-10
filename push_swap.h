/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:17:05 by acaes             #+#    #+#             */
/*   Updated: 2024/12/09 13:38:11 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Ultimate/inc/ultimate.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> // À enlever avant le push !

// ----- Structure pour un nœud -----
typedef struct s_node
{
    int value;               // Valeur du nœud
    struct s_node *next;     // Pointeur vers le nœud suivant
    struct s_node *prev;     // Pointeur vers le nœud précédent
} t_node;

// ----- Structure pour la pile -----
typedef struct s_stack
{
    t_node *top;             // Pointeur vers le sommet de la pile
    t_node *bottom;          // Pointeur vers le bas de la pile
    int size;                // Taille de la pile
} t_stack;

// ----- Manipulation des nœuds -----
t_node  *dlst_new(int value);

// ----- Manipulation des piles -----
void    dlst_init(t_stack *stack);
void    dlst_add_front(t_stack *stack, t_node *new_node);
void    dlst_add_back(t_stack *stack, t_node *new_node);
t_node  *dlst_remove_front(t_stack *stack);
t_node  *dlst_remove_back(t_stack *stack);
void    free_dlst(t_stack *stack);

// ----- Fonctions de manipulation des mouvements -----
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *b, t_stack *a);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);

// ----- Validation des arguments -----
int     parse_arguments(int argc, char **argv, t_stack *stack_a);
int     is_number(char *str);
int     is_unique(char *str, t_stack *stack);
int     ft_atoi(const char *str);

// ----- Utilitaires -----
int     is_sorted(t_stack *stack);
void    dlst_print(t_stack *stack);

#endif
