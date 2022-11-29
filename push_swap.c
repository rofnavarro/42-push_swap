/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:18 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/29 19:52:45 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_piles	piles;
	
	ft_check(argc, argv);
	ft_init_piles(&piles, argc, argv);
	ft_template(&piles);
	ft_number_class(&piles);
	if (!ft_is_sorted(&piles.stack_a, piles.original_size) == TRUE)
	{
		if (piles.original_size == 2)
			ft_sort_two(&piles);
		else if (piles.original_size == 3)
			ft_sort_three(&piles);
		else if (piles.original_size == 4)
			ft_sort_four(&piles);
		else if (piles.original_size == 5)
			ft_sort_five(&piles);
		else
			ft_algoritm(&piles);
	}
	if (ft_is_sorted(&piles.stack_a, piles.original_size) == TRUE)
		ft_number_declass(&piles);
	else
		ft_error("Não conseguiu organizar!");
	ft_printf("\n");
	int		i = 0;
	while (i < piles.stack_a.size)
	{
		ft_printf("A: %d\n", piles.stack_a.stack[i]);
		i++;
	}
	ft_printf("\n");
	ft_free_piles(&piles);
	return (0);
}
