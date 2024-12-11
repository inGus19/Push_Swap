/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:33:13 by acaes             #+#    #+#             */
/*   Updated: 2024/12/11 13:23:49 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void dlst_print(t_stack *stack)
{
	t_node *current;

	if (!stack || !stack->top)
	{
		printf("(stack is empty)\n");
		return;
	}
	current = stack->top;
	printf("Stack (size: %d): ", stack->size);
	while (current != stack->bot)
	{
        	printf("%d ", current->value);
		current = current->next;
	}
	current = stack->bot;
       	printf("%d ", current->value);
	printf("\n");
}

int main(int argc, char **argv)
{
	t_stack a;
	
	// Initialisation des piles
	dlst_init(&a);
	// Analyse des arguments et remplissage	
	if (!parse_arguments(argc, argv, &a))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	// Lancement de l'algorithme de tri
	if (!is_sorted(&a))
		sort_three(&a);
	dlst_print(&a);
	// Libération de la mémoire
	free_dlst(&a);
	return (0);
}
