/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:16:33 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/07 18:32:18 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_check_type(char *argv[]);
static void	ft_compare_int(int x, int y, t_stack *stack);

void	ft_check(int argc, char *argv[])
{
	if (argc < 3)
		ft_error("Need More Arguments!");
	ft_check_type(argv);
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

void	ft_check_dup(t_stack *stack)
{
	t_node	*current_node;
	t_node	*compare_node;

	current_node = stack->root;
	compare_node = stack->root->next;
	while (current_node != NULL)
	{
		compare_node = stack->root;
		ft_printf("%d\n", current_node->x);
		while (compare_node != NULL)
		{
			ft_printf("%d compare\n", compare_node->x);
			ft_compare_int(current_node->x, compare_node->x, stack);
			compare_node = compare_node->next;
		}
		current_node = current_node->next;
	}
}

static void	ft_compare_int(int x, int y, t_stack *stack)
{
	x = x * 1;
	y = y * 1;
	if (x == y)
	{
		ft_free_pile(stack);
		ft_error("Duplicated number!\n");
	}
}
