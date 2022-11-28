/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:45:41 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/28 19:41:28 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algoritm(t_piles *piles)
{
	int	i;
	int	ref;

	i = 0;
	piles->stack_a.mid_value = ft_mid_value(&piles->stack_a);

	ft_printf("\n%d\n", piles->stack_a.mid_value);


	while (i < piles->stack_a.size)
	{
		ft_printf("A: %d\n", piles->stack_a.stack[i]);
		i++;
	}
	ft_printf("\n\n");
	i = 0;
	while (i < piles->stack_b.size)
	{
		ft_printf("B: %d\n", piles->stack_b.stack[i]);
		i++;
	}
	ft_printf("\n");
	i =0;
	while (i < piles->stack_a.size)
	{
		ft_printf("compare: %d\n", piles->template[i]);
		i++;
	}
	ft_printf("\n");
}
