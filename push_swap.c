/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:18 by rferrero          #+#    #+#             */
/*   Updated: 2022/10/17 12:51:35 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void check_args(int argc, char *argv[]);

int	main(int argc, char *argv[])
{
	check_args(argc, argv);
	return (0);
}

static void check_args(int argc, char *argv[])
{
	if(!argc || argc < 3)
	{
		ft_printf("Error!\nWrong number of arguments!\n");
		exit(1);
	}
}
