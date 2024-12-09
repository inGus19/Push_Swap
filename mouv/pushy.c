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

void pa(t_stack *a, t_stack *b) 
{
    if (!b || b->size == 0)
        return;

    t_node *top_b = dlst_remove_front(b);
    dlst_add_front(a, top_b);
}

void pb(t_stack *b, t_stack *a) 
{
    if (!a || a->size == 0)
        return;

    t_node *top_a = dlst_remove_front(a);
    dlst_add_front(b, top_a);
}
