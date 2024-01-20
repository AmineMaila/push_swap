/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:29:43 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/17 17:48:54 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/push_swap.h"

int	sorted(t_list *a)
{
	if (!a)
		return (0);
	while (a->next)
	{
		if (a->content > a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}

int	is_max(t_list *node, int num)
{
	while (node)
	{
		if (node->content > num)
			return (0);
		node = node->next;
	}
	return (1);
}

void	sort_three(t_list **a)
{
	while (!sorted(*a))
	{
		if (is_max(*a, (*a)->content))
			ra(a);
		else if ((*a)->next->content < (*a)->content)
			sa(a);
		else if ((*a)->next->content > (*a)->next->next->content)
			rra(a);
	}
}

void	sort_five(t_stack *a, t_stack *b)
{
	if (sorted(a->head))
		return ;
	while (a->size > 3)
	{
		if (a->head->index < a->size / 2)
			pb(&a->head, &b->head);
		else
			ra(&a->head);
		a->size = ft_lstsize(a->head);
	}
	sort_three(&a->head);
	if (sorted(b->head))
		sb(&b->head);
	pa(&b->head, &a->head);
	pa(&b->head, &a->head);
}
