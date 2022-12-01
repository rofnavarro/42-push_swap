/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:16:33 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/30 21:17:27 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_check_type(char *argv[]);

void	ft_check(int argc, char *argv[])
{
	if (argc < 3)
		ft_error("Wrong number of arguments!");
	ft_check_type(argv);
}

static void	ft_check_type(char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == '-' || argv[i][j] == '+')
			{
				if (j != 0)
					ft_error("Signal Input Wrong!");
				if (argv[i][j + 1] == '\0')
					ft_error("Invalid Input!");
			}
			if ((argv[i][j] != '-' && argv[i][j] != '+') && \
				(argv[i][j] > 57 || argv[i][j] < 48))
				ft_error("Invalid Input! Must Be a Number!");
			j++;
		}
		i++;
	}	
}

void	ft_check_dup(t_piles *piles)
{
	int	i;
	int	j;

	i = 0;
	while (i != piles->stack_a.size)
	{
		j = i + 1;
		while (j != piles->stack_a.size)
		{
			if (piles->stack_a.stack[i] == piles->stack_a.stack[j])
			{
				ft_free_piles(piles);
				ft_error("Duplicated number found!");
			}
			j++;
		}
		i++;
	}
}
