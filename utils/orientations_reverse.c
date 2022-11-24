/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orientations_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:08:41 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/24 15:23:31 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_piles *piles)
{
	int	i;
	int	tmp;

	i = piles->stack_a.size - 1;
	tmp = piles->stack_a.stack[piles->stack_a.size - 1];
	while (i > 0)
	{
		piles->stack_a.stack[i] = piles->stack_a.stack[i - 1];
		i--;
	}
	piles->stack_a.stack[0] = tmp;
	ft_printf("rra\n");
}

void	ft_rrb(t_piles *piles)
{
	int	i;
	int	tmp;

	i = piles->stack_b.size - 1;
	tmp = piles->stack_b.stack[piles->stack_b.size - 1];
	while (i > 0)
	{
		piles->stack_b.stack[i] = piles->stack_b.stack[i - 1];
		i--;
	}
	piles->stack_b.stack[0] = tmp;
	ft_printf("rrb\n");
}

void	ft_rrr(t_piles *piles)
{
	int	i;
	int	tmp;

	i = piles->stack_a.size - 1;
	tmp = piles->stack_a.stack[piles->stack_a.size - 1];
	while (i > 0)
	{
		piles->stack_a.stack[i] = piles->stack_a.stack[i - 1];
		i--;
	}
	piles->stack_a.stack[0] = tmp;
	i = piles->stack_b.size - 1;
	tmp = piles->stack_b.stack[piles->stack_b.size - 1];
	while (i > 0)
	{
		piles->stack_b.stack[i] = piles->stack_b.stack[i - 1];
		i--;
	}
	piles->stack_b.stack[0] = tmp;
	ft_printf("rrr\n");
}
