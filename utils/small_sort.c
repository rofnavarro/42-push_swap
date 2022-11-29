/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:29:15 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/29 19:51:46 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_two(t_piles *piles)
{
	if (piles->stack_a.stack[0] > piles->stack_a.stack[1])
		ft_sa(piles);
}

void	ft_sort_three(t_piles *piles)
{
	if (piles->stack_a.stack[0] == piles->higher)
	{
		ft_ra(piles);
		ft_sort_two(piles);
	}
	else if (piles->stack_a.stack[1] == piles->higher)
	{
		ft_rra(piles);
		ft_sort_two(piles);
	}
	else if (piles->stack_a.stack[2] == piles->higher)
		ft_sort_two(piles);
}

void	ft_sort_four(t_piles *piles)
{
	if (piles->stack_a.stack[0] == piles->lower)
	{
		ft_pb(piles);
		piles->lower++;
		ft_sort_three(piles);
		ft_pa(piles);
		piles->lower--;
	}
	else if (piles->stack_a.stack[1] == piles->lower)
	{
		ft_sa(piles);
		ft_sort_four(piles);
	}
	else if (piles->stack_a.stack[2] == piles->lower || \
				piles->stack_a.stack[3] == piles->lower)
	{
		ft_rra(piles);
		ft_sort_four(piles);
	}
}

void	ft_sort_five(t_piles *piles)
{
	if (piles->stack_a.stack[0] == piles->lower)
	{
		ft_pb(piles);
		piles->lower++;
		ft_sort_four(piles);
		ft_pa(piles);
		piles->lower--;
	}
	else if (piles->stack_a.stack[1] == piles->lower || \
				piles->stack_a.stack[2] == piles->lower)
	{
		ft_ra(piles);
		ft_sort_five(piles);
	}
	else if (piles->stack_a.stack[3] == piles->lower || \
				piles->stack_a.stack[4] == piles->lower)
	{
		ft_rra(piles);
		ft_sort_five(piles);
	}
}
