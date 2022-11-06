/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:06:15 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/06 12:56:57 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_insert(t_node ***root, int x);
static int	ft_to_int(t_node ***root, char *argv);
static void	ft_check_over(t_node ***root, long result);

void	ft_convert(t_node **root, int argc, char *argv[])
{
	int		i;

	i = 1;
	while (argv[i])
	{
		ft_insert(&root, ft_to_int(&root, argv[i]));
		i++;
	}
}

static void	ft_insert(t_node ***root, int x)
{
	t_node	*current_node;
	t_node	*new_node;

	current_node = **root;
	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		ft_error("Malloc Fail!");
	new_node->x = x;
	new_node->next = NULL;
	if (**root == NULL)
	{
		*root = new_node;
		return ;
	}
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
}

static int	ft_to_int(t_node ***root, char *argv)
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
	ft_check_over(&root, result);
	i = result;
	return (i);
}

static void	ft_check_over(t_node ***root, long result)
{
	if (result > INT_MAX || result < INT_MIN)
	{
		ft_free_pile(&root);
		ft_error("Number must be in INT range");
	}
}
