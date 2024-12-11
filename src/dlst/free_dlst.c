/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:40:41 by acaes             #+#    #+#             */
/*   Updated: 2024/12/11 12:48:47 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	free_dlst(t_stack *stack)
{
	t_node	*current;
	t_node	*next_node;

	if (!stack || !stack->top)
		return ;
	current = stack->top;
	while (current != stack->bot)
	{
		next_node = current->next;
		free(current);
		current = NULL;
		current = next_node;
	}
	if (stack->bot == current)
		free(current);
	stack->top = NULL;
	stack->bot = NULL;
	stack->size = 0;
}
