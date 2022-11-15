/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:26 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/14 23:52:50 by rferrero         ###   ########.fr       */
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

# define TRUE 0
# define FALSE 1

typedef struct s_node
{
	int				x;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*root;
	int		size;
	int		min;
	int		mid;
	int		max;
}	t_stack;

//	algoritm.c
void	ft_algoritm(t_stack *stack_a);

//	check.c
void	ft_init_stack(t_stack *stack);
void	ft_check(int argc, char *argv[]);
void	ft_check_dup(t_stack *stack);

//	error.c
void	ft_error(char *str);
void	ft_free_pile(t_stack *stack);

//	sort.c
void	ft_sort(t_stack *stack);

//	start.c
void	ft_make_stack(t_stack *stack, char *argv[]);
void	ft_insert(t_stack *stack, int x);

#endif