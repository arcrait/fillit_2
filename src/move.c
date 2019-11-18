/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:06:46 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/12 13:57:59 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void		y_to_zero(t_tetra **knot)
{
	t_tetra			*lst;

	lst = *knot;
	while (lst)
	{
		lst->last_y = 0;
		lst = lst->next;
	}
}

static int		check(t_tetra **knot, char **map, int size)
{
	short int	i;

	i = 0;
	while (i < 4)
	{
		if ((*knot)->x[i] + (*knot)->last_x >= size)
		{
			i = 0;
			(*knot)->last_x = 0;
			(*knot)->last_y++;
		}
		if ((*knot)->y[i] + (*knot)->last_y == size)
			break ;
		if (map[(*knot)->y[i] + (*knot)->last_y]
			[(*knot)->x[i] + (*knot)->last_x] == '.')
			i++;
		else
		{
			i = 0;
			(*knot)->last_x++;
		}
	}
	return (i == 4 ? 1 : 0);
}

static void		tetra_move(char ***map, t_tetra **knot, int size)
{
	while (*knot)
	{
		if (check(knot, *map, size))
		{
			draw_map(knot, map);
			(*knot) = (*knot)->next;
		}
		else
		{
			if ((*knot)->prev == NULL)
			{
				free_map(map);
				create_map(map, ++size);
				y_to_zero(knot);
			}
			else
			{
				reset_map(map, &(*knot)->prev);
				(*knot)->last_x = 0;
				(*knot)->last_y = 0;
				(*knot)->prev->last_x++;
				(*knot) = (*knot)->prev;
			}
		}
	}
}

int				main_move(t_tetra **start, int size)
{
	int		i;
	char	**map;
	t_tetra	*knot;

	i = 0;
	knot = *start;
	size = ft_sqrt((size * 4) / 21);
	create_map(&map, size);
	tetra_move(&map, &knot, size);
	while (map[i])
	{
		write(1, map[i], ft_strlen(map[i]));
		write(1, "\n", 1);
		i++;
	}
	free_map(&map);
	return (0);
}
