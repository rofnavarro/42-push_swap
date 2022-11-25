/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:45:41 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/25 19:01:21 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algoritm(t_piles *piles)
{
	int	i;

	i = 0;
	while (i < piles->stack_a.size)
	{
		ft_printf("%d\n", piles->stack_a.stack[i]);
		i++;
	}
	piles->stack_a.mid_value = ft_mid_value(&piles->stack_a);
	ft_printf("\n\n%d ", piles->stack_a.mid_value);
}

