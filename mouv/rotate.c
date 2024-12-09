/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:16:31 by acaes             #+#    #+#             */
/*   Updated: 2024/12/01 17:16:36 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_stack *a) 
{
    if (!a || a->size < 2)
        return;

    t_node *top = dlst_remove_front(a);
    dlst_add_back(a, top);
}

void rb(t_stack *b) 
{
    if (!b || b->size < 2)
        return;

    t_node *top = dlst_remove_front(b);
    dlst_add_back(b, top);
}

void rr(t_stack *a, t_stack *b) 
{
    ra(a);
    rb(b);
}
