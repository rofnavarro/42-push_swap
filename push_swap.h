/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:26 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/01 15:02:37 by rferrero         ###   ########.fr       */
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
	int				size;
	struct s_node	*next;
}	t_node;

//	check.c
void	ft_check(int argc, char *argv[]);

//	start.c
void	ft_run(t_node *pile, int argc, char *argv[]);

//	free.c
void	ft_free_pile(t_node **pile);

//	error.c
void	ft_error(char *str);

#endif