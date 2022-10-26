/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:26 by rferrero          #+#    #+#             */
/*   Updated: 2022/10/26 14:40:03 by rferrero         ###   ########.fr       */
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
	int				i;
	struct s_node	*next;
}	t_node;

typedef struct s_piles
{
	t_node	a;
	t_node	b;
	
}	t_piles;

//	start.c
void	ft_allocate_numbers(int argc, char *argv[]);

//	free.c
void	ft_free_array(int **array);
void	ft_free_stack(t_piles *piles);

#endif