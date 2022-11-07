/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:18 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/07 14:23:00 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_nodes(t_node **root);

int	main(int argc, char *argv[])
{
	t_stack	stack_a;

	stack_a.root = NULL;
	stack_a.size = 1;
	ft_check(argc, argv);
	ft_run(&stack_a, argv);

	ft_printf("programa rodando\n");

	ft_free_pile(&stack_a);

	return (0);
}

void	ft_print_nodes(t_node **root)
{
	t_node	*curr;
	
	curr = *root;
	while(curr != NULL)
	{
		ft_printf("%d\n", curr->x);
		curr = curr->next;
	}
}

