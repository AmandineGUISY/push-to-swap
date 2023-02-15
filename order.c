/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <aguisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:25:15 by aguisy            #+#    #+#             */
/*   Updated: 2023/02/15 15:43:14 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_order(t_list **start)
{
	t_list	*tmp;
	t_list	*rem;
	int	ind;

	tmp = *start;
	while (tmp && tmp->next)
		tmp = tmp->next;
	ind = tmp->indice;
	while(ind > 0)
	{
		rem = *start;
		tmp = rem->next;
		while (tmp)
		{
			if (tmp->num > rem->num && tmp->place == 0)
				rem = tmp;
			tmp = tmp->next;	
		}
		rem->place = ind;
		ind--;
	}
}

int	is_order(t_list **start)
{
	t_list	*tmp;

	tmp = *start;
	while (tmp && tmp->next)
	{
		if (tmp->indice != tmp->place)
			return (1);
		tmp = tmp->next;
	}
	if (tmp->indice != tmp->place)
        return (1);
	return (0);
}
