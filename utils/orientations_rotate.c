/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orientations_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:33:51 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/24 15:01:03 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_piles *piles)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = piles->stack_a.stack[0];
	while (i < piles->stack_a.size)
	{
		piles->stack_a.stack[i - 1] = piles->stack_a.stack[i];
		i++;
	}
	piles->stack_a.stack[i - 1] = tmp;
	ft_printf("ra\n");
}

void	ft_rb(t_piles *piles)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = piles->stack_b.stack[0];
	while (i < piles->stack_b.size)
	{
		piles->stack_b.stack[i - 1] = piles->stack_b.stack[i];
		i++;
	}
	piles->stack_b.stack[i - 1] = tmp;
	ft_printf("rb\n");
}

void	ft_rr(t_piles *piles)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = piles->stack_a.stack[0];
	while (i < piles->stack_a.size)
	{
		piles->stack_a.stack[i - 1] = piles->stack_a.stack[i];
		i++;
	}
	piles->stack_a.stack[i - 1] = tmp;
	i = 1;
	tmp = piles->stack_b.stack[0];
	while (i < piles->stack_b.size)
	{
		piles->stack_b.stack[i - 1] = piles->stack_b.stack[i];
		i++;
	}
	piles->stack_b.stack[i - 1] = tmp;
	ft_printf("rr\n");
}
