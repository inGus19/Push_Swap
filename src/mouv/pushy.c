/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:59:49 by acaes             #+#    #+#             */
/*   Updated: 2024/12/11 11:24:00 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pushy(t_stack *push, t_stack *pull)
{
	t_node	*node;

	if (pull->size == 0)
		return ;
	node = dlst_remove_front(pull);
	dlst_add_front(push, node);
}

void	pa(t_stack *a, t_stack *b)
{
	pushy(a, b);
	ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	pushy(b, a);
	ft_printf("pb\n");
}
