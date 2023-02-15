/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <aguisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:40:53 by aguisy            #+#    #+#             */
/*   Updated: 2023/02/15 15:50:03 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	doublons(t_list **start)
{
	t_list	*tmp;
	t_list	*move;

	move = *start;
	if (!(*start))
		return (1);
	while (move && move->next)
	{
		tmp = move->next;
		while (tmp && tmp->next)
		{
			if (move->num == tmp->num)
				return (1);
			tmp = tmp->next;
		}
		if (move->num == tmp->num)
			return (1);
		move = move->next;
	}
	return (0);
}

int	ft_verifint(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i] != NULL)
	{
		j = 0;
		if (str[i][j] == '-')
			j++;
		while (str[i][j])
		{
			if ((str[i][j] > '9' || str[i][j] < '0'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_verif(int argc, char **argv, t_list **start)
{
	char	**str;

	str = argv;
	if (argc <= 2)
		return (write(0,"a doit contenir au moin 2 chiffres\n", 35));
	if (ft_verifint(str) == 1)
		return (write (0, "Error\n", 6));
	if (create_list(str, &(*start)) == 1)
		return (write (0, "Error\n", 6));
	if (doublons(&(*start)) == 1)
		return (write (0, "Error\n", 6));
	return (0);
}