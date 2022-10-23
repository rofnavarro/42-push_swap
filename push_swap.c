/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:18 by rferrero          #+#    #+#             */
/*   Updated: 2022/10/23 17:32:04 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_args(int argc, char *argv[]);
static void	check_type(int argc, char *argv[]);

int	main(int argc, char *argv[])
{
	check_args(argc, argv);
	check_type(argc, argv);
	//check_duplicates(argc,argv);
	return (0);
}

static void	check_args(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (!argc || argc < 2)
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
	int	negative;

	i = 1;
	negative = 0;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > 57 && argv[i][j] < 48)
			{
				ft_printf("Error\n char \n");
				exit(EXIT_FAILURE);
			}
			if (j != 0 && argv[i][j] == '-')
			{
				ft_printf("Error\n negative\n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}	
}
