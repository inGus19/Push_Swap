/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:17:18 by acaes             #+#    #+#             */
/*   Updated: 2024/12/01 18:27:46 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

void	print_stack(t_stack *stack)
{
    while (stack)
    {
        printf("%d ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}

int	main()
{
    printf("=== Test de sa ===\n");
    t_stack a1 = {1, NULL};
    t_stack a2 = {2, &a1};
    t_stack a3 = {3, &a2};
    t_stack *stack_a = &a3;
    print_stack(stack_a);
    sa(&stack_a);
    print_stack(stack_a);

    printf("=== Test de pb ===\n");
    t_stack *stack_b = NULL;
    pb(&stack_a, &stack_b);
    print_stack(stack_a);
    print_stack(stack_b);

    printf("=== Test de ra ===\n");
    ra(&stack_a);
    print_stack(stack_a);

    printf("=== Test de rra ===\n");
    rra(&stack_a);
    print_stack(stack_a);

    printf("=== Test de sab ===\n");
    t_stack b1 = {4, NULL};
    t_stack b2 = {5, &b1};
    t_stack *stack_b2 = &b2;
    print_stack(stack_a);
    print_stack(stack_b2);
    sab(&stack_a, &stack_b2);
    print_stack(stack_a);
    print_stack(stack_b2);

    printf("=== Test de rrr ===\n");
    rrr(&stack_a, &stack_b2);
    print_stack(stack_a);
    print_stack(stack_b2);
	return (0);
}
