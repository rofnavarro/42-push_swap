/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:45:05 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/28 19:39:13 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
		while(j < piles->stack_a.size)
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
