/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguisy <aguisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:43:15 by aguisy            #+#    #+#             */
/*   Updated: 2023/02/15 15:50:33 by aguisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_list
{
	int	indice;
	int	place;
	int	num;
	struct s_list *next;
} t_list;

long int	ft_atoi(char *str);
int			ft_verifint(char **str);
int			main(int argc, char **argv);
int			new_list(int i, t_list **start, int ind);
int			create_list(char **str, t_list **start);
int			ft_verif(int argc, char **argv, t_list **start);
int			doublons(t_list **start);
int			is_order(t_list **start);
void		make_order(t_list **start);

#endif
