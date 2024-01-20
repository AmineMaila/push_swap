/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:48:41 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/20 16:16:14 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc == 1)
		return (0);
	a.head = NULL;
	b.head = NULL;
	parse(argc, argv, &a);
	b.size = 0;
	if (!sorted(a.head))
	{
		if (a.size <= 3)
			sort_three(&a.head);
		else if (a.size == 5)
			sort_five(&a, &b);
		else
		{
			push_to_b(&a, &b);
			sort_three(&a.head);
			init_algo(&a, &b);
		}
	}
	ft_exit(0, &a.head, &b.head);
}
