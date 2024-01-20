/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 14:33:37 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/12 19:48:24 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	check_repetitve(t_list **a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *a;
	while (tmp1->next)
	{
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if (tmp1->content == tmp2->content)
				ft_exit(1, a, NULL);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}

void	parse(int argc, char **argv, t_stack *a)
{
	char	**tmp;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		tmp = ft_split(argv[i], ' ');
		if (!tmp)
			ft_exit(1, &a->head, NULL);
		else if (!tmp[0])
			ft_exit(1, &a->head, NULL);
		j = 0;
		while (tmp[j])
			ft_lstadd_back(&a->head, ft_atoi(tmp[j++], &a->head));
		free_2d(&tmp);
		i++;
	}
	check_repetitve(&a->head);
	a->size = ft_lstsize(a->head);
}
