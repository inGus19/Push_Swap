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

#include "../push_swap.h"

void sa(t_stack *a) 
{
    if (!a || a->size < 2)
        return;
    t_node *first = a->top;
    t_node *second = first->next;

    if (second) 
	{
        first->next = second->next;
        if (second->next)
            second->next->prev = first;
        second->next = first;
        second->prev = NULL;
        first->prev = second;
        a->top = second;
    }
}

void sb(t_stack *b) 
{
	sa(b);
}

void ss(t_stack *a, t_stack *b) 
{
    sa(a);
    sb(b);
}
