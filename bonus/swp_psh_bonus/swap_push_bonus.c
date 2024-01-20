/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:18:30 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/10 22:04:36 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
	swap(a);
}

void	sb(t_list **b)
{
	swap(b);
}

void	ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
}
