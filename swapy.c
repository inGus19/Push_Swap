/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:16:04 by acaes             #+#    #+#             */
/*   Updated: 2024/12/01 17:33:34 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swapy(t_stack **stack)
{
	t_satck	*first;
	t_stack	*second;

	if (!stack || !(*stack) || !((*stack)->next))
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa(t_stack **a)
{
	swapy(a);
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	swapy(b);
	ft_printf("sb\n");
}

void	sab(t_stack **a, t_stack **b)
{
	swapy(a);
	swapy(b);
	ft_printf("sab\n");
}
