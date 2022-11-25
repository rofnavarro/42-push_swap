/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:24:17 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/25 20:07:44 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	*ft_control_sort(int *sorted_stack, int size);

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

int	ft_is_reverse_sorted(t_stack *stack, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		if (stack->stack[i - 1] < stack->stack[i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	ft_mid_value(t_stack *stack)
{
	int	i;
	int	mid_value;
	int	*sorted_stack;

	i = 0;
	sorted_stack = (int *)malloc(sizeof(int) * stack->size);
	while (i < stack->size)
	{
		sorted_stack[i] = stack->stack[i];
		i++;
	}
	sorted_stack = ft_control_sort(sorted_stack, stack->size);
	mid_value = sorted_stack[(stack->size - 2) / 2];
	free(sorted_stack);
	return (mid_value);
}

static int	*ft_control_sort(int *sorted_stack, int size)
{
	int	i;
	int	j;
	int	tmp_value;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (sorted_stack[i] > sorted_stack[j])
			{
				tmp_value = sorted_stack[i];
				sorted_stack[i] = sorted_stack[j];
				sorted_stack[j] = tmp_value;
			}
			j++;
		}
		i++;
	}
	return (sorted_stack);
}
