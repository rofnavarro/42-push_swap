/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:45:41 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/15 00:07:44 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algoritm(t_stack *stack_a)
{
	t_stack	stack_b;
	int		mid_point;

	mid_point = stack_a->size / 2;
	ft_init_stack(&stack_b);

	ft_free_pile(&stack_b);
}
