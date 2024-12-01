/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:17:05 by acaes             #+#    #+#             */
/*   Updated: 2024/12/01 18:28:26 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../Finish/Libft/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

void	print_stack(t_stack *stack);

void	swapy(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	sab(t_stack **a, t_stack **_b);

void	pushy(t_stack **src, t_stack **dst);
void	pa(t_stack **b, t_stack **a);
void	pb(t_stack **a, t_stack **b);

void	rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rab(t_stack **a, t_stack **b);

void	rev_rot(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif
