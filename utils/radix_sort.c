/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:02:41 by rferrero          #+#    #+#             */
/*   Updated: 2022/12/01 19:51:20 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_bit_size(t_piles *piles);
static void	ft_push_bit(t_piles *piles, int bit);
static int	ft_check_bit(int number, int bit);

void	ft_radix_sort(t_piles *piles)
{
	int	bit_size;
	int	i;

	bit_size = ft_bit_size(piles);
	i = 0;
	while (i < bit_size)
	{
		ft_push_bit(piles, i);
		while (piles->stack_b.size > 0)
			ft_pa(piles);
		i++;
	}
}

static int	ft_bit_size(t_piles *piles)
{
	int	max_bits;
	int	size;

	max_bits = 0;
	size = piles->higher;
	while (size)
	{
		max_bits++;
		size = size >> 1;
	}
	return (max_bits);
}

static void	ft_push_bit(t_piles *piles, int bit)
{
	int	i;
	int	last_bit;

	i = 0;
	while (i <= piles->higher)
	{
		last_bit = ft_check_bit(piles->stack_a.stack[0], bit);
		if (last_bit == 1)
			ft_ra(piles);
		else
			ft_pb(piles);
		i++;
	}
}

static int	ft_check_bit(int number, int bit)
{
	int	ret;

	ret = (number >> bit & 1);
	return (ret);
}
