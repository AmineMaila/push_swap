/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:22:56 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/10 16:28:20 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

int	reverse_rotate(t_list **stack)
{
	t_list	*beforelast;
	t_list	*tmp;

	if (!(*stack) || !(*stack)->next)
		return (0);
	beforelast = ft_lst_beforelast(*stack);
	tmp = beforelast->next;
	beforelast->next = NULL;
	tmp->next = *stack;
	*stack = tmp;
	return (1);
}

void	rra(t_list **a)
{
	if (reverse_rotate(a))
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list **b)
{
	if (reverse_rotate(b))
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_putstr_fd("rrr\n", 1);
}
