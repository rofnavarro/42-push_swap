/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orientations_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:17:38 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/23 17:22:33 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_push(t_piles *piles, int from, char pile_to);

void	ft_pa(t_piles *piles)
{
	int	i;
	int	*tmp_stack;
	int	tmp_value;

	i = 0;
	if (piles->stack_b.size == 0)
		return ;
	else
	{
		tmp_stack = malloc(sizeof(int) * piles->stack_b.size - 1);
		tmp_value = piles->stack_b.stack[0];
		while (i < piles->stack_b.size - 1)
		{
			tmp_stack[i] = piles->stack_b.stack[i + 1];
			i++;
		}
		free(piles->stack_b.stack);
		piles->stack_b.stack = tmp_stack;
		ft_push(piles, tmp_value, 'a');
		ft_printf("pa\n");
	}
}

void	ft_pb(t_piles *piles)
{
	int	i;
	int	*tmp_stack;
	int	tmp_value;

	i = 0;
	if (piles->stack_a.size == 0)
		return ;
	else
	{
		tmp_stack = malloc(sizeof(int) * piles->stack_a.size - 1);
		tmp_value = piles->stack_a.stack[0];
		while (i < piles->stack_a.size - 1)
		{
			tmp_stack[i] = piles->stack_a.stack[i + 1];
			i++;
		}
		free(piles->stack_a.stack);
		piles->stack_a.stack = tmp_stack;
		ft_push(piles, tmp_value, 'b');
		ft_printf("pb\n");
	}
}

static void	ft_push(t_piles *piles, int from, char pile_to)
{
	int	i;

	if (pile_to == 'a')
	{
		i = piles->stack_a.size - 1;
		while (i > 0)
		{
			piles->stack_a.stack[i] = piles->stack_a.stack[i - 1];
			i--;
		}
		piles->stack_a.size++;
		piles->stack_a.stack[0] = from;
	}
	else if (pile_to == 'b')
	{
		i = piles->stack_b.size - 1;
		while (i > 0)
		{
			piles->stack_b.stack[i] = piles->stack_b.stack[i - 1];
			i--;
		}
		piles->stack_b.size++;
		piles->stack_b.stack[0] = from;
	}
}
