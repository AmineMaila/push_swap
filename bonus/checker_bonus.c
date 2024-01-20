/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:47:15 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/20 14:49:02 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	compare(t_stack *a, t_stack *b, char *instructions)
{
	if (!ft_strcmp(instructions, "sa\n"))
		sa(&a->head);
	else if (!ft_strcmp(instructions, "sb\n"))
		sb(&b->head);
	else if (!ft_strcmp(instructions, "ss\n"))
		ss(&a->head, &b->head);
	else if (!ft_strcmp(instructions, "pa\n"))
		pa(&a->head, &b->head);
	else if (!ft_strcmp(instructions, "pb\n"))
		pb(&a->head, &b->head);
	else if (!ft_strcmp(instructions, "ra\n"))
		ra(&a->head);
	else if (!ft_strcmp(instructions, "rb\n"))
		rb(&b->head);
	else if (!ft_strcmp(instructions, "rr\n"))
		rr(&a->head, &b->head);
	else if (!ft_strcmp(instructions, "rra\n"))
		rra(&a->head);
	else if (!ft_strcmp(instructions, "rrb\n"))
		rrb(&b->head);
	else if (!ft_strcmp(instructions, "rrr\n"))
		rrr(&a->head, &b->head);
	else
		ft_exit(1, &a->head, &b->head);
}

void	checker(t_stack *a, t_stack *b)
{
	char	*instructions;

	instructions = get_next_line(0);
	while (instructions)
	{
		compare(a, b, instructions);
		free(instructions);
		instructions = get_next_line(0);
	}
	free(instructions);
}
