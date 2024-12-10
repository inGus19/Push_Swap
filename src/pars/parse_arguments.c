/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:47:28 by acaes             #+#    #+#             */
/*   Updated: 2024/12/10 17:51:57 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	parse_arguments(int argc, char **argv, t_stack *stack_a)
{
	int	i;
	int	value;

	i = 1;
	while (i < argc)
	{
		if (!is_number(argv[i]))
			return (0);
		value = ft_atoi(argv[i]);
		if (!is_unique(value, stack_a))
			return (0);
		dlst_add_back(stack_a, dlst_new(value));
		i++;
	}
	return (1);
}
