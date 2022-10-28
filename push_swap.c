/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:18 by rferrero          #+#    #+#             */
/*   Updated: 2022/10/27 22:29:53 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_type(char *argv[]);
static void	ft_check_args(int argc);
static void	ft_check_duplicates(int argc, char *argv[]);
static void	ft_argv_compare(char *argv1, char *argv2);

int	main(int argc, char *argv[])
{
	t_piles	pile;

	ft_check_type(argv);
	ft_check_args(argc);
	ft_check_duplicates(argc, argv);
	ft_run(argc, argv);
	ft_printf("programa rodando\n");
	return (0);
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
			if (j != 0 && argv[i][j] == '-')
				ft_error("Minus Signal Input Wrong!");
			if (argv[i][j] != '-' && (argv[i][j] > 57 || argv[i][j] < 48))
				ft_error("Invalid Input! Must Be a Number!");
			j++;
		}
		i++;
	}	
}

static void	ft_check_args(int argc)
{
	if (argc < 3)
		ft_error("Need More Arguments!");
}

static void	ft_check_duplicates(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 0;
	while (argv[i] != NULL)
	{
		j = i + 1;
		while (argv[j] != NULL)
		{
			ft_argv_compare(argv[i], argv[j]);
			j++;
		}
		i++;
	}
}

static void	ft_argv_compare(char *argv1, char *argv2)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(argv1);
	b = ft_strlen(argv2);
	if (b > a)
		a = b;
	if (ft_strncmp(argv1, argv2, a) == 0)
		ft_error("Numbers Cannot Be Duplicated!");
}
