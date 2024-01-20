/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_1_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:21:29 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/10 17:55:42 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	rotate(t_list **stack)
{
	t_list	*tmp;

	if (!(*stack) || !(*stack)->next)
		return (0);
	tmp = (*stack)->next;
	ft_lstadd_back(stack, (*stack)->content);
	free(*stack);
	*stack = tmp;
	return (1);
}

void	ra(t_list **a)
{
	rotate(a);
}

void	rb(t_list **b)
{
	rotate(b);
}

void	rr(t_list **a, t_list **b)
{
	rotate(b);
	rotate(a);
}
