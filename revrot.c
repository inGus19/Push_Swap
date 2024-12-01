/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:16:46 by acaes             #+#    #+#             */
/*   Updated: 2024/12/01 17:16:50 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rot(t_stack **stack)
{
	t_satck	*prev;
	t_stack	*last;

	if (!stack || !(*stack) || !((*stack)->next))
		return ;
	prev = NULL;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *satck;
	*stack = last;
}

void	rra(t_stack **a)
{
	rev_rot(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	rev_rot(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rot(a);
	rev_rot(b);
	ft_printf("rrr\n");
}
