/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:18 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/12 11:26:47 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_init_stacks(t_stack *stack_A, t_stack *stack_B);

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;

	ft_check(argc, argv);
	ft_init_stacks(&stack_a, &stack_b);
	ft_make_stack(&stack_a, argv);
	ft_sort(&stack_a, &stack_b);
	ft_printf("programa rodando\n");
	ft_free_pile(&stack_b);
	ft_free_pile(&stack_a);
	return (0);
}

static void	ft_init_stacks(t_stack *stack_A, t_stack *stack_B)
{
	stack_A->root = NULL;
	stack_A->size = 0;
	stack_B->root = NULL;
	stack_B->size = 0;
}
