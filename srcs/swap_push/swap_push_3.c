/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:29:33 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/10 16:30:18 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!(*b))
		return ;
	ft_putstr_fd("pa\n", 1);
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!(*a))
		return ;
	ft_putstr_fd("pb\n", 1);
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
}
