/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:45:41 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/27 19:38:33 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algoritm(t_piles *piles)
{
	int	i;
	int	mid_value;
	int	steps;

	ft_printf("A size:%d\n\n", piles->stack_a.size);
	ft_printf("B size:%d\n\n", piles->stack_b.size);
	mid_value = ft_mid_value(&piles->stack_a);
	ft_printf("Mid value:%d\n\n", mid_value);

	while (steps < 1)
	{
		if (piles->stack_a.stack[0] > mid_value)
			ft_ra(piles);
		else if (piles->stack_a.stack[0] <= mid_value)
			ft_pb(piles);
		if (piles->stack_a.size == piles->stack_a.mid_position)
			steps++;
	}

	i = 0;
	while (i < piles->stack_a.size)
	{
		ft_printf("A: %d\n", piles->stack_a.stack[i]);
		i++;
	}
	ft_printf("\n\n");
	i = 0;
	while (i < piles->stack_b.size)
	{
		ft_printf("B: %d\n", piles->stack_b.stack[i]);
		i++;
	}
}
