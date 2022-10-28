/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:06:15 by rferrero          #+#    #+#             */
/*   Updated: 2022/10/27 22:45:23 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void ft_insert(t_node *node, int x);

void	ft_run(int argc, char *argv[])
{
	int		i;
	t_piles	pile;

	i = 1;
	pile.a = NULL;
	while (argv[i])
	{
		ft_insert(&pile.a, argv[i]);
		i++;
	}
}

static void ft_insert(t_node *node, int x)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		ft_error("Malloc Fail!");
	new_node->x = x;
	new_node->next = NULL;
	if (node == NULL)
	{
		node == new_node;
		return;
	}
}

