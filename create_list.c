/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <aguisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:28:58 by aguisy            #+#    #+#             */
/*   Updated: 2023/02/15 16:39:49 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_free(t_list **start)
{
	t_list *tmp;

	while (tmp)
	{
		tmp = (*start)->next;
		free(start);
		*start = tmp;
	}
	free(tmp);
}

int	create_list(char **str, t_list **start)
{
	int	i;
	long	rem;
	int	indice;

	i = 1;
	indice = 0;
	while (str[i])
	{
		rem = ft_atoi(str[i]);
		if (rem > 2147483647 || rem < -2147483648)
			return (1);
		indice = new_list(rem, &(*start), indice);
		if (indice == 0)
			return (1);
		i++;
	}
	return (0);
}

int	new_list(int i, t_list **start, int ind)
{
	t_list	*tmp;
	t_list	*new;

	tmp = *start;
	while (tmp && tmp->next)
		tmp = tmp->next;
	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->num = i;
	new->indice = ind + 1;
	new->place = 0;
	new->next = NULL;
	if (!(*start))
		*start = new;
	else
		tmp->next = new;
	return (ind + 1);
}

int	main(int argc, char **argv)
{
	t_list	*start;
	t_list	*tmp;

	start = NULL;
	(void)argc;
	ft_verif(argc, argv, &start);
	make_order(&start);
	tmp = start;
	while (tmp)
	{
		//printf("num = %i\n", tmp->num);
		tmp = tmp->next;
	}
	if (is_order(&start) == 0)
		return (write(0, "OK", 2));
	ft_free(&start);
	return (0);
}
