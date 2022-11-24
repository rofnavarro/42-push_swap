/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:45:41 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/24 14:18:29 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_algoritm(t_piles *piles)
{
	ft_pb(piles);
	ft_pb(piles);

	ft_ss(piles);
	
	ft_pa(piles);
	ft_pa(piles);
	ft_pa(piles);
}
