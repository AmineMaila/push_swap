/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:43:23 by mmaila            #+#    #+#             */
/*   Updated: 2024/01/11 16:23:57 by mmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/push_swap.h"

long int	calcresult(const char *str, int sign, int i, t_list **a)
{
	long int	result;
	long int	resulttemp;

	result = 0;
	resulttemp = 0;
	if (!ft_isdigit(str[i]))
		ft_exit(1, a, NULL);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			ft_exit(1, a, NULL);
		resulttemp = result * 10 + (str[i] - '0');
		if (resulttemp < result && sign == 1)
			ft_exit(1, a, NULL);
		else if (resulttemp < result && sign == -1)
			ft_exit(1, a, NULL);
		result = resulttemp;
		i++;
	}
	return (result * sign);
}

int	ft_atoi(const char *str, t_list **a)
{
	int			i;
	int			sign;
	long int	result;

	i = 0;
	sign = 1;
	while (str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = calcresult(str, sign, i, a);
	if (result < -2147483648 || result > 2147483647)
		ft_exit(1, a, NULL);
	return (result);
}
