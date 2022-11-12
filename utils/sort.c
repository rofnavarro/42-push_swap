/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:24:17 by rferrero          #+#    #+#             */
/*   Updated: 2022/11/12 13:03:30 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	*ft_stack_to_array(t_stack *stack);

void	ft_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	*array;

	array = ft_stack_to_array(stack_a);
	while (ft_is_sorted(array) == FALSE)
	{

	}
	free(array);
}

int	ft_is_sorted(int *array)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (array[i])
	{
		while (array[j])
		{
			if (array[i] <= array[j])
				j++;
			else
				return (FALSE);
		}
		j = 0;
		i++;
	}
	return (TRUE);
}

static int	*ft_stack_to_array(t_stack *stack)
{
	t_node	*curr;
	int		*array;
	int		i;

	array = (int *)malloc(sizeof(int) * stack->size);
	i = 0;
	curr = stack->root;
	while (curr != NULL)
	{
		array[i] = curr->x;
		curr = curr->next;
		i++;
	}
	return (array);
}