/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orientations_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:10:53 by rferrero          #+#    #+#             */
/*   Updated: 2022/12/01 11:51:12 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_piles *piles)
{
	int	tmp;

	tmp = 0;
	tmp = piles->stack_a.stack[0];
	piles->stack_a.stack[0] = piles->stack_a.stack[1];
	piles->stack_a.stack[1] = tmp;
	ft_printf("sa\n");
}

void	ft_sb(t_piles *piles)
{
	int	tmp;

	tmp = 0;
	tmp = piles->stack_b.stack[0];
	piles->stack_b.stack[0] = piles->stack_b.stack[1];
	piles->stack_b.stack[1] = tmp;
	ft_printf("sb\n");
}

void	ft_ss(t_piles *piles)
{
	int	tmp;

	tmp = 0;
	tmp = piles->stack_a.stack[0];
	piles->stack_a.stack[0] = piles->stack_a.stack[1];
	piles->stack_a.stack[1] = tmp;
	tmp = 0;
	tmp = piles->stack_b.stack[0];
	piles->stack_b.stack[0] = piles->stack_b.stack[1];
	piles->stack_b.stack[1] = tmp;
	ft_printf("ss\n");
}
