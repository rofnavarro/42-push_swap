/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:26 by rferrero          #+#    #+#             */
/*   Updated: 2022/10/27 22:29:50 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//	read() write()
# include <unistd.h>

//	malloc() free() exit()
# include <stdlib.h>

//	ft_printf()
# include "./ft_printf/ft_printf.h"

typedef struct s_node
{
	int				x;
	struct s_node	*next;
}	t_node;

typedef struct s_piles
{
	t_node	*a;
	t_node	*b;
	
}	t_piles;

//	start.c
void	ft_run(int argc, char *argv[]);

//	ft_error.c
void	ft_error(char *str);

#endif