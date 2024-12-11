/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_remove_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:40:27 by acaes             #+#    #+#             */
/*   Updated: 2024/12/11 11:41:58 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*dlst_remove_front(t_stack *stack)
{
	t_node	*removed_node;

	if (!stack || !stack->top)
		return (NULL);
	removed_node = stack->top;
	stack->top = removed_node->next;
	if (stack->top)
		stack->top->prev = NULL;
	else
		stack->bot = NULL;
	stack->size--;
	return (removed_node);
}
