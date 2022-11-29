/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:21:26 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/29 19:40:37 by rferrero         ###   ########.fr       */
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
	int	mid_value;
}	t_stack;

typedef struct s_piles
{
	int		*template;
	int		higher;
	int		lower;
	int		original_size;
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

//	orientations_push.c
void	ft_pa(t_piles *piles);
void	ft_pb(t_piles *piles);

//	orientations_reverse.c
void	ft_rra(t_piles *piles);
void	ft_rrb(t_piles *piles);
void	ft_rrr(t_piles *piles);

//	orientations_rotate.c
void	ft_ra(t_piles *piles);
void	ft_rb(t_piles *piles);
void	ft_rr(t_piles *piles);

//	orientations_swap.c
void	ft_sa(t_piles *piles);
void	ft_sb(t_piles *piles);
void	ft_ss(t_piles *piles);

//	small_sort.c
void	ft_sort_two(t_piles *piles);
void	ft_sort_three(t_piles *piles);
void	ft_sort_four(t_piles *piles);
void	ft_sort_five(t_piles *piles);

//	sort.c
int		ft_is_sorted(t_stack *stack, int size);
int		ft_is_reverse_sorted(t_stack *stack, int size);
int		ft_mid_value(t_stack *stack);
int		*ft_control_sort(int *sorted_stack, int size);

//	sort2.c
void	ft_number_class(t_piles *piles);
void	ft_number_declass(t_piles *piles);
void	ft_template(t_piles *piles);

//	start.c
void	ft_init_piles(t_piles *piles, int argc, char **argv);

#endif