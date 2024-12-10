/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_unique.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:46:43 by acaes             #+#    #+#             */
/*   Updated: 2024/12/10 17:46:59 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_unique(int value, t_stack *stack)
{
	t_node	*current;

	current = stack->top;
	while (current)
	{
		if (current->value == value)
			return (0);
		current = current->next;
	}
	return (1);
}
