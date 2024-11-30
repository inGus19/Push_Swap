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

void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	sab(t_stack **stack_a, t_stack **stack_b);
void	print_stack(t_stack *stack);

#endif

/*
void	pa();
void	pb();
void	ra();
void	rb();
void	rr();
void	rra();
void	rrb();
void	rrr();
*/
