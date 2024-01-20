/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_2_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:22:56 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/10 17:55:50 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
	reverse_rotate(a);
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}
