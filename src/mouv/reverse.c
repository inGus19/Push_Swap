/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:18:53 by acaes             #+#    #+#             */
/*   Updated: 2024/12/11 11:27:08 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	reverse(t_stack *stack)
{
	t_node	*last;

	if (stack->size < 2)
		return ;
	last = dlst_remove_back(stack);
	dlst_add_front(stack, last);
}

void	rra(t_stack *a)
{
	reverse(a);
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	reverse(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse(a);
	reverse(b);
	ft_printf("rrr\n");
}
