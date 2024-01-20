/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:47:40 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/20 16:17:11 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc == 1)
		return (0);
	b.head = NULL;
	a.head = NULL;
	b.size = 0;
	parse(argc, argv, &a);
	if (a.head)
		checker(&a, &b);
	if (sorted(a.head) && !b.head)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	ft_exit(0, &a.head, &b.head);
}
