/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:12:24 by acaes             #+#    #+#             */
/*   Updated: 2024/12/11 11:17:44 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate(t_stack *stack)
{
	t_node	*first;

	if (stack->size < 2)
		return ;
	first = dlst_remove_front(stack);
	dlst_add_back(stack, first);
}

void	ra(t_stack *a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
