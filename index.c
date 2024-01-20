/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:25:17 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/10 16:26:38 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/push_swap.h"

t_list	*get_max(t_list *stack)
{
	t_list	*max;

	max = stack;
	while (stack)
	{
		if (stack->content > max->content)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

t_list	*get_min(t_list *stack)
{
	t_list	*min;

	min = stack;
	while (stack)
	{
		if (stack->content < min->content)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

t_list	*get_next_min(t_list *stack, t_list *min, t_list *max)
{
	t_list	*next_min;

	next_min = max;
	while (stack)
	{
		if (stack->content < next_min->content && stack->content > min->content)
			next_min = stack;
		stack = stack->next;
	}
	return (next_min);
}

void	index_it(t_stack *a)
{
	t_list	*max;
	t_list	*min;
	int		i;

	i = 1;
	max = get_max(a->head);
	min = get_min(a->head);
	min->index = 0;
	while (i < a->size)
	{
		min = get_next_min(a->head, min, max);
		min->index = i++;
	}
}
