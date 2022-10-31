/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:06:15 by rferrero          #+#    #+#             */
/*   Updated: 2022/10/29 14:20:04 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_insert(t_node **node, int x);
static int	ft_to_int(char *argv);

void	ft_run(int argc, char *argv[])
{
	int		i;
	t_node	*pile;

	i = 1;
	pile = NULL;
	while (argv[i])
	{
		ft_insert(&pile, ft_to_int(argv[i]));
		if (argv[i + 1] != NULL)
			pile->size++;
	i++;
	}
	free(pile);
}

static void	ft_insert(t_node **root, int x)
{
	t_node	*current_node;
	t_node	*new_node;

	current_node = *root;
	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		ft_error("Malloc Fail!");
	new_node->x = x;
	new_node->next = NULL;
	if (*root == NULL)
	{
		*root = new_node;
		return ;
	}
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
	free(new_node);
}

static int	ft_to_int(char *argv)
{
	const char	*str;
	int			x;

	str = argv;
	x = ft_atoi(str);
	return (x);
}
