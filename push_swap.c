/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <aguisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:40:01 by aguisy            #+#    #+#             */
/*   Updated: 2023/02/15 15:50:27 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(char *str)
{
	int		sign;
	int		move;
	long int		result;

	sign = 1;
	move = 0;
	result = 0;
	if (str[move] == '+' || str[move] == '-')
	{
		if (str[move] == '-')
			sign = -1;
		move++;
	}
	while (str[move] >= '0' && str[move] <= '9')
	{
		result = result * 10 + str[move] - '0';
		move++;
	}
	return (result * sign);
}