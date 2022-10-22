/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:18 by rferrero          #+#    #+#             */
/*   Updated: 2022/10/21 21:52:59 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_args(int argc, char *argv[]);
static void	check_type(int argc, char *argv[]);

int	main(int argc, char *argv[])
{
	check_args(argc, argv);
	check_type(argc, argv);
	return (0);
}

static void	check_args(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (!argc || argc < 3)
	{
		if (argc == 1)
			exit(EXIT_FAILURE);
		ft_printf("Error!\n");
		exit(EXIT_FAILURE);
	}
}

static void	check_type(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][0] != '-' && ft_isdigit(argv[i][j]) == 0)
			{
				ft_printf("Error!\n array\n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}
