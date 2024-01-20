/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:44:47 by mmaila            #+#    #+#             */
/*   Updated: 2023/12/31 17:12:46 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

t_list	*ft_lst_beforelast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next->next)
		lst = lst->next;
	return (lst);
}
