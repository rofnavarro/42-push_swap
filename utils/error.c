/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:34:32 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/30 21:15:55 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *str)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(EXIT_SUCCESS);
}

void	ft_free_piles(t_piles *piles)
{
	free(piles->stack_a.stack);
	free(piles->stack_b.stack);
	free(piles->template);
}
