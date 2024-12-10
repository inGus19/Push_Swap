/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_remove_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:40:13 by acaes             #+#    #+#             */
/*   Updated: 2024/12/10 17:42:10 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*dlst_remove_back(t_stack *stack)
{
	t_node	*removed_node;

	if (!stack || !stack->bottom)
		return (NULL);
	removed_node = stack->bottom;
	stack->bottom = removed_node->prev;
	if (stack->bottom)
		stack->bottom->next = NULL;
	else
		stack->top = NULL;
	stack->size--;
	return (removed_node);
}
