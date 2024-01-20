/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:25:01 by mmaila            #+#    #+#             */
/*   Updated: 2023/12/30 21:16:56 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}
