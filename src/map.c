/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:13:02 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/08 12:44:47 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void		create_map(char ***map, int size)
{
	int			i;

	i = 0;
	*map = (char **)malloc(sizeof(char *) * (size + 1));
	(*map)[size] = NULL;
	while (i < size)
	{
		(*map)[i] = (char *)malloc(sizeof(char) * (size));
		(*map)[i][size] = '\0';
		ft_memset((*map)[i], '.', size);
		i++;
	}
}

void		free_map(char ***map)
{
	int					i;

	i = 0;
	while ((*map)[i])
		i++;
	while (i >= 0)
	{
		free((*map)[i]);
		(*map)[i] = NULL;
		i--;
	}
	free(*map);
	*map = NULL;
}

void		reset_map(char ***map, t_tetra **knot)
{
	short int	i;

	i = 0;
	while (i < 4)
	{
		(*map)[(*knot)->y[i] + (*knot)->last_y]
		[(*knot)->x[i] + (*knot)->last_x] = '.';
		i++;
	}
}

void		draw_map(t_tetra **knot, char ***map)
{
	short int		i;

	i = 0;
	while (i <= 3)
	{
		(*map)[(*knot)->y[i] + (*knot)->last_y]
		[(*knot)->x[i] + (*knot)->last_x] = (*knot)->letter;
		i++;
	}
}
