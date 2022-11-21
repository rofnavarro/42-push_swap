/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:24:17 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/19 09:26:39 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_min(t_stack *stack);
static void	ft_max(t_stack *stack);
static int	ft_is_sorted(t_stack *stack, int size);

void	ft_sort(t_stack *stack)
{
	int	size;

	size = stack->size;
	ft_min(stack);
	ft_max(stack);
	stack->mid = (stack->max + stack->min) / 2;
	while (ft_is_sorted(stack, size) == FALSE)
	{
		ft_algoritm(stack);
		ft_printf("Tudo em dia!\n");
	}
}

static void	ft_min(t_stack *stack)
{
	t_node	*current_node;

	current_node = stack->root;
	stack->min = stack->root->x;
	while (current_node->next != NULL)
	{
		if (current_node->next->x < current_node->x)
			stack->min = current_node->next->x;
		current_node = current_node->next;
	}
}

static void	ft_max(t_stack *stack)
{
	t_node	*current_node;

	current_node = stack->root;
	stack->max = stack->root->x;
	while (current_node->next != NULL)
	{
		if (current_node->next->x > current_node->x)
			stack->max = current_node->next->x;
		current_node = current_node->next;
	}
}

static int	ft_is_sorted(t_stack *stack, int original_size)
{
	t_node	*current_node;

	current_node = stack->root;
	while (current_node->next != NULL)
	{
		if (current_node->x > current_node->next->x)
			return (FALSE);
		else
			current_node = current_node->next;
	}
	if (stack->size != original_size)
		return (FALSE);
	else
		return (TRUE);
}
