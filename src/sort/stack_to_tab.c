/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_to_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:54:38 by acaes             #+#    #+#             */
/*   Updated: 2024/12/12 12:14:13 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	*stack_to_tab(t_stack *stack, int *tab)
{
	int	i;

	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (stack)
	{
		tab[i] = stack->value;
		stack = stack->next;
		i++;
	}
	return (tab);
}
