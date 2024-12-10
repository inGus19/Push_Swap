/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_add_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:39:02 by acaes             #+#    #+#             */
/*   Updated: 2024/12/10 17:39:13 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	dlst_add_front(t_stack *stack, t_node *new_node)
{
	if (!stack || !new_node)
		return ;
	new_node->next = stack->top;
	if (stack->top)
		stack->top->prev = new_node;
	else
		stack->bottom = new_node;
	stack->top = new_node;
	stack->size++;
}
