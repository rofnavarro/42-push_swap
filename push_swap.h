/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:26 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/21 18:00:10 by rferrero         ###   ########.fr       */
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

typedef struct s_stack
{
	int	*stack;
	int	size;
	int	max;
	int	min;
}	t_stack;

typedef struct s_piles
{
	t_stack	stack_a;
	t_stack	stack_b;
}	t_piles;

//	algoritm.c
void	ft_algoritm(t_piles *piles);

//	check.c
void	ft_check(int argc, char *argv[]);
void	ft_check_dup(t_piles *piles);

//	error.c
void	ft_error(char *str);
void	ft_free_piles(t_piles *piles);

//	sort.c
int		ft_is_sorted(t_stack *stack, int size);

//	start.c
void	ft_init_piles(t_piles *piles, int argc, char **argv);

#endif