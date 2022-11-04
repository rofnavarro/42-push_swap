/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:16:33 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/04 20:03:45 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_check_type(char *argv[]);
static void	ft_check_duplicates(int argc, char *argv[]);
static void	ft_argv_compare(char *argv1, char *argv2);

void	ft_check(int argc, char *argv[])
{
	if (argc < 3)
		ft_error("Need More Arguments!");
	ft_check_type(argv);
	ft_check_duplicates(argc, argv);
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
