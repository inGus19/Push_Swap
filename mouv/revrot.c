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

#include "../push_swap.h"

void rra(t_stack *a) 
{
    if (!a || a->size < 2)
        return;

    t_node *last = dlst_remove_back(a);
    dlst_add_front(a, last);
}

void rrb(t_stack *b) 
{
    if (!b || b->size < 2)
        return;

    t_node *last = dlst_remove_back(b);
    dlst_add_front(b, last);
}

void rrr(t_stack *a, t_stack *b) 
{
    rra(a);
    rrb(b);
}
