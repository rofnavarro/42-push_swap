/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:16:33 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/19 09:25:11 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_check_type(char *argv[]);
static void	ft_compare_int(int x, int y, t_stack *stack);

void	ft_init_stack(t_stack *stack)
{
	stack->root = NULL;
	stack->size = 0;
}

void	ft_check(int argc, char *argv[])
{
	if (argc < 3)
	{
		if (argc == 1)
			exit(EXIT_FAILURE);
		else if (argc == 2)
			exit(EXIT_SUCCESS);
	}
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
	while (current_node != NULL && compare_node != NULL)
	{
		while (compare_node != NULL)
		{
			ft_compare_int(current_node->x, compare_node->x, stack);
			compare_node = compare_node->next;
		}
		compare_node = current_node->next->next;
		current_node = current_node->next;
	}
}

static void	ft_compare_int(int x, int y, t_stack *stack)
{
	if (x == y)
	{
		ft_free_pile(stack);
		ft_error("Duplicated number!");
	}
}
