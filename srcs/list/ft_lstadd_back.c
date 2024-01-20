/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:51:20 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/05 14:40:42 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

t_list	*ft_lstnew(int content, int index)
{
	t_list	*lst;

	lst = (t_list *) malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->index = index;
	lst->next = NULL;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, int content, int index)
{
	t_list	*temp;
	t_list	*new;

	new = ft_lstnew(content, index);
	temp = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
