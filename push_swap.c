/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:18 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/28 19:40:05 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_piles	piles;
	int		original_size;

	ft_check(argc, argv);
	ft_init_piles(&piles, argc, argv);
	original_size = piles.stack_a.size;
	piles.template = ft_control_sort(piles.template, original_size);
	ft_number_class(&piles);
	if (!ft_is_sorted(&piles.stack_a, original_size) == TRUE)
		ft_algoritm(&piles);
	ft_free_piles(&piles);
	return (0);
}
