/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orientations_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:17:38 by rferrero          #+#    #+#             */
/*   Updated: 2022/12/01 11:50:31 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_push_a(t_piles *piles, int from);
static void	ft_push_b(t_piles *piles, int from);

void	ft_pa(t_piles *piles)
{
	int	i;
	int	*tmp_stack;
	int	tmp_value;

	i = 1;
	if (piles->stack_b.size == 0)
		return ;
	else
	{
		tmp_value = piles->stack_b.stack[0];
		tmp_stack = (int *)malloc(sizeof(int) * piles->stack_b.size - 1);
		while (i < piles->stack_b.size)
		{
			tmp_stack[i - 1] = piles->stack_b.stack[i];
			i++;
		}
		free(piles->stack_b.stack);
		piles->stack_b.stack = tmp_stack;
		piles->stack_b.size--;
		ft_push_a(piles, tmp_value);
		ft_printf("pa\n");
	}
}

static void	ft_push_a(t_piles *piles, int from)
{
	int	*tmp;
	int	i;

	piles->stack_a.size++;
	tmp = (int *)malloc(sizeof(int) * piles->stack_a.size);
	tmp[0] = from;
	i = 0;
	while (i < piles->stack_a.size - 1)
	{
		tmp[i + 1] = piles->stack_a.stack[i];
		i++;
	}
	free(piles->stack_a.stack);
	piles->stack_a.stack = tmp;
}

void	ft_pb(t_piles *piles)
{
	int	i;
	int	*tmp_stack;
	int	tmp_value;

	i = 1;
	if (piles->stack_a.size == 0)
		return ;
	else
	{
		tmp_value = piles->stack_a.stack[0];
		tmp_stack = (int *)malloc(sizeof(int) * piles->stack_a.size - 1);
		while (i < piles->stack_a.size)
		{
			tmp_stack[i - 1] = piles->stack_a.stack[i];
			i++;
		}
		free(piles->stack_a.stack);
		piles->stack_a.stack = tmp_stack;
		piles->stack_a.size--;
		ft_push_b(piles, tmp_value);
		ft_printf("pb\n");
	}
}

static void	ft_push_b(t_piles *piles, int from)
{
	int	*tmp;
	int	i;

	piles->stack_b.size++;
	tmp = (int *)malloc(sizeof(int) * piles->stack_b.size);
	tmp[0] = from;
	i = 1;
	while (i < piles->stack_b.size)
	{
		tmp[i] = piles->stack_b.stack[i - 1];
		i++;
	}
	free(piles->stack_b.stack);
	piles->stack_b.stack = tmp;
}
