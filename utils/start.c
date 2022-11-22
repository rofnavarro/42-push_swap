/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:46:50 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/22 18:05:38 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_to_int(t_piles *piles, char *argv);
static void	ft_check_over(t_piles *piles, long result);

void	ft_init_piles(t_piles *piles, int argc, char **argv)
{
	int	i;

	i = 1;
	piles->stack_a.stack = (int *)malloc(sizeof(int) * argc);
	piles->stack_b.stack = (int *)malloc(sizeof(int) * argc);
	piles->stack_a.size = 0;
	piles->stack_b.size = 0;
	while (argv[i])
	{
		piles->stack_a.stack[piles->stack_a.size] = \
		ft_to_int(piles, argv[i]);
		piles->stack_a.size++;
		i++;
	}
	ft_check_dup(piles);
}

static int	ft_to_int(t_piles *piles, char *argv)
{
	long	result;
	long	signal;
	int		i;

	result = 0;
	signal = 1;
	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
	{
		if (argv[i] == '-')
			signal = -1;
		else
			signal = 1;
		i++;
	}
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		result = (result * 10) + (argv[i] - '0');
		i++;
	}
	result = result * signal;
	ft_check_over(piles, result);
	i = result;
	return (i);
}

static void	ft_check_over(t_piles *piles, long result)
{
	if (result > INT_MAX || result < INT_MIN)
	{
		ft_free_piles(piles);
		ft_error("Number must be in INT range!");
	}
}
