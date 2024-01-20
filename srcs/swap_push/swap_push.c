/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:18:30 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/10 16:30:14 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

int	swap(t_list **stack)
{
	t_list	*tmp;

	if (!(*stack) || !(*stack)->next)
		return (0);
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
	return (1);
}

void	sa(t_list **a)
{
	if (swap(a))
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **b)
{
	if (swap(b))
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	ft_putstr_fd("ss\n", 1);
}
