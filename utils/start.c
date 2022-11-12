/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:46:50 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/11 15:18:53 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_to_int(t_stack *stack, char *argv);
static void	ft_check_over(t_stack *stack, long result);

void	ft_make_stack(t_stack *stack, char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		ft_insert(stack, ft_to_int(stack, argv[i]));
		stack->size++;
		i++;
	}
	ft_check_dup(stack);
}

void	ft_insert(t_stack *stack, int x)
{
	t_node	*current_node;
	t_node	*new_node;

	current_node = stack->root;
	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		ft_error("Malloc Fail!");
	new_node->x = x;
	new_node->next = NULL;
	if (stack->root == NULL)
	{
		stack->root = new_node;
		return ;
	}
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
}

static int	ft_to_int(t_stack *stack, char *argv)
{
	long	result;
	long	signal;
	int		i;

	result = 0;
	signal = 1;
	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
	{
		if (argv[i] == '-')
			signal = -1;
		else
			signal = 1;
		i++;
	}
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		result = (result * 10) + (argv[i] - '0');
		i++;
	}
	result = result * signal;
	ft_check_over(stack, result);
	i = result;
	return (i);
}

static void	ft_check_over(t_stack *stack, long result)
{
	if (result > INT_MAX || result < INT_MIN)
	{
		ft_free_pile(stack);
		ft_error("Number must be in INT range");
		exit(EXIT_FAILURE);
	}
}
