/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:45:05 by rferrero          #+#    #+#             */
/*   Updated: 2022/12/01 19:41:51 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_template(t_piles *piles)
{
	piles->original_size = piles->stack_a.size;
	piles->template = ft_control_sort(piles->template, piles->original_size);
	piles->higher = piles->original_size - 1;
	piles->lower = 0;
}

int	*ft_control_sort(int *sorted_stack, int size)
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
