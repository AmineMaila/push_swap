/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:20:12 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/20 18:40:33 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/push_swap.h"

void	free_2d(char ***data)
{
	int	i;

	i = 0;
	while ((*data)[i])
		free((*data)[i++]);
	free(*data);
}

void	ft_exit(int n, t_list **a, t_list **b)
{
	if (n == 1)
		ft_putstr_fd("Error\n", 2);
	ft_lstclear(a);
	ft_lstclear(b);
	exit(n);
}
