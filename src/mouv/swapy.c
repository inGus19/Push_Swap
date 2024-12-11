/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:49:32 by acaes             #+#    #+#             */
/*   Updated: 2024/12/11 10:55:19 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swapy(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (stack->size < 2)
		return ;
	first = stack->top;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	else
		stack->bot = first;
	second->next = first;
	second->prev = NULL;
	first->prev = second;
	stack->top = second;
}

void	sa(t_stack *a)
{
	swapy(a);
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	swapy(b);
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	swapy(a);
	swapy(b);
	ft_printf("ss\n");
}
