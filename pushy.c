/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:15:44 by acaes             #+#    #+#             */
/*   Updated: 2024/12/01 17:32:32 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushy(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (!src || !*src)
		return ;
	tmp = *src;
	*src = tmp->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	pa(t_stack **b, t_stack **a)
{
	pushy(b, a);
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	pushy(a, b);
	ft_printf("pb\n");
}
