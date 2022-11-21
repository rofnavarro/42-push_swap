/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:24:17 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/21 17:55:39 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_stack *stack, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (stack->stack[i] > stack->stack[i + 1])
			return (FALSE);
		i++;
	}
	return (TRUE);
}
