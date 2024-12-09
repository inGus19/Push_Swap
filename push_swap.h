/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:17:05 by acaes             #+#    #+#             */
/*   Updated: 2024/12/01 18:28:26 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Ultimate/inc/ultimate.h"
# include <unistd.h>
# include <stdlib.h>

# include <stdio.h> 		 //enlever avant push !!

typedef struct s_node 
{
    int value;               // Valeur du nœud
    struct s_node *next;     // Pointeur vers le nœud suivant
    struct s_node *prev;     // Pointeur vers le nœud précédent
} t_node;

// Structure représentant une pile (liste doublement chaînée)
typedef struct s_stack 
{
    t_node *top;             // Pointeur vers le sommet de la pile
    t_node *bottom;          // Pointeur vers le bas de la pile
    int size;                // Taille de la pile
} t_stack;

// Fonctions de manipulation des mouvements
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

// Fonctions de manipulation de la liste doublement chaînée
t_node *dlst_new(int value);
t_node *dlst_remove_front(t_stack *stack);
t_node *dlst_remove_back(t_stack *stack);
void dlst_add_front(t_stack *stack, t_node *new_node);
void dlst_add_back(t_stack *stack, t_node *new_node);
void dlst_print(t_stack *stack); // Pour le débogage, affiche la pile

// Fonctions utilitaires
int is_sorted(t_stack *stack);
void free_stack(t_stack *stack);

// Pour le débogage
void dlst_print(t_stack *stack);

#endif
