/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:20:43 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/12 22:07:42 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/push_swap.h"

void	push_to_b(t_stack *a, t_stack *b)
{
	t_type	pivot;

	pivot.prev = -1;
	pivot.sec = a->size / 6;
	pivot.init = a->size / 3;
	while (ft_lstsize(a->head) > 3)
	{
		if (b->size > 1 && b->head->index < pivot.sec
			&& b->head->index > pivot.prev && a->head->index >= pivot.init)
			rr(&a->head, &b->head);
		else if (b->size > 1 && b->head->index < pivot.sec
			&& b->head->index > pivot.prev)
			rb(&b->head);
		if (a->head->index < pivot.init)
			pb(&a->head, &b->head);
		else
			ra(&a->head);
		if (b->size >= pivot.init)
		{
			pivot.prev = pivot.init;
			pivot.sec = ft_lstsize(a->head) / 6 + pivot.init;
			pivot.init = ft_lstsize(a->head) / 3 + pivot.init;
		}
		b->size = ft_lstsize(b->head);
	}
}

void	find_correct(t_stack *b, int index)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = b->head;
	while (tmp)
	{
		if (tmp->index == index)
			break ;
		tmp = tmp->next;
		i++;
	}
	if (i <= b->size / 2)
		rb(&b->head);
	else
		rrb(&b->head);
}

void	norm(t_stack *a, t_stack *b, int *boolean)
{
	rrb(&b->head);
	pa(&a->head, &b->head);
	ra(&a->head);
	(*boolean)++;
}

void	push_to_a(t_stack *a, t_stack *b, int *boolean)
{
	if (b->head->index == a->head->index - 1)
		pa(&a->head, &b->head);
	else if (ft_lstlast(b->head)->index == a->head->index - 1)
		(rrb(&b->head), pa(&a->head, &b->head));
	else if (*boolean == 0)
	{
		(pa(&a->head, &b->head), ra(&a->head));
		(*boolean)++;
	}
	else if (ft_lstlast(a->head)->index == a->head->index - 1)
	{
		rra(&a->head);
		(*boolean)--;
	}
	else if (b->head->index > ft_lstlast(a->head)->index)
	{
		(pa(&a->head, &b->head), ra(&a->head));
		(*boolean)++;
	}
	else if (ft_lstlast(b->head)->index > ft_lstlast(a->head)->index)
		norm(a, b, boolean);
	else
		find_correct(b, a->head->index - 1);
}

void	init_algo(t_stack *a, t_stack *b)
{
	int		boolean;

	boolean = 0;
	while (b->size)
	{
		push_to_a(a, b, &boolean);
		b->size = ft_lstsize(b->head);
	}
	while (a->head->index - 1 == ft_lstlast(a->head)->index)
		rra(&a->head);
}
