/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_remove_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:40:13 by acaes             #+#    #+#             */
/*   Updated: 2024/12/11 11:41:37 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_node	*dlst_remove_back(t_stack *stack)
{
	t_node	*removed_node;

	if (!stack || !stack->bot)
		return (NULL);
	removed_node = stack->bot;
	stack->bot = removed_node->prev;
	if (stack->bot)
		stack->bot->next = NULL;
	else
		stack->top = NULL;
	stack->size--;
	return (removed_node);
}
