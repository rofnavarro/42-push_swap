/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:24:17 by rferrero          #+#    #+#             */
/*   Updated: 2022/12/01 19:51:34 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_stack *stack, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (stack->stack[i - 1] > stack->stack[i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}

void	ft_number_class(t_piles *piles)
{
	int	*tmp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tmp = (int *)malloc(sizeof(int) * piles->stack_a.size);
	while (i < piles->stack_a.size)
	{
		j = 0;
		while (j < piles->stack_a.size)
		{
			if (piles->template[i] == piles->stack_a.stack[j])
				tmp[j] = i;
			j++;
		}
		i++;
	}
	free(piles->stack_a.stack);
	piles->stack_a.stack = tmp;
}

void	ft_number_declass(t_piles *piles)
{
	int	i;
	int	*tmp;

	i = 0;
	tmp = (int *)malloc(sizeof(int) * piles->stack_a.size);
	while (i < piles->stack_a.size)
	{
		if (piles->stack_a.stack[i] == i)
		{
			tmp[i] = piles->template[i];
			i++;
		}
		else
			ft_error("Não está ordenado!");
	}
	free(piles->stack_a.stack);
	piles->stack_a.stack = tmp;
}
