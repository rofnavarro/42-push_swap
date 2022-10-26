/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:26 by rferrero          #+#    #+#             */
/*   Updated: 2022/10/25 17:56:23 by rferrero         ###   ########.fr       */
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

typedef struct s_stack
{
	int				top;
	unsigned int	size;
	struct s_stack	*start;
	struct s_stack	*next;
	
}	t_stack;

//	start.c
void	ft_allocate_numbers(int argc, char *argv[], t_stack *stack);

//	free.c
void	ft_free_array(int **array);
void	ft_free_stack(t_stack *stack);

#endif