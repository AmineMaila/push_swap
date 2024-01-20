/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:21:29 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/10 16:28:27 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*tmp;

	if (!(*stack) || !(*stack)->next)
		return (0);
	tmp = (*stack)->next;
	ft_lstadd_back(stack, (*stack)->content, (*stack)->index);
	free(*stack);
	*stack = tmp;
	return (1);
}

void	ra(t_list **a)
{
	if (rotate(a))
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **b)
{
	if (rotate(b))
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_list **a, t_list **b)
{
	rotate(b);
	rotate(a);
	ft_putstr_fd("rr\n", 1);
}
