/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:34:32 by rferrero          #+#    #+#             */
/*   Updated: 2022/10/26 14:40:17 by rferrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free_array(int **array)
{
	size_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	ft_free_stack(t_piles *pile)
{
	free(pile->a.next);
	free(pile);
}
