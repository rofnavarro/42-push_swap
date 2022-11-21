/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:18 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/20 22:20:02 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stack_a;

	ft_check(argc, argv);
	ft_init_stack(&stack_a);
	ft_make_stack(&stack_a, argv);
	ft_sort(&stack_a);

	ft_init_array(argc, argv);

	ft_printf("programa rodando\n");
	ft_free_pile(&stack_a);
	return (0);
}
