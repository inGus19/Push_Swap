/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst_add_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:38:23 by acaes             #+#    #+#             */
/*   Updated: 2024/12/11 11:40:11 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	dlst_add_back(t_stack *stack, t_node *new_node)
{
	if (!stack || !new_node)
		return ;
	new_node->prev = stack->bot;
	if (stack->bot)
		stack->bot->next = new_node;
	else
		stack->top = new_node;
	stack->bot = new_node;
	stack->size++;
}
