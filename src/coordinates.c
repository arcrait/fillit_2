/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   los_coordinatos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 15:06:04 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/08 12:43:06 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void	shift_x(t_tetra **knot)
{
	short int			min;
	short int			i;

	i = 0;
	min = 3;
	while (i < 4)
	{
		min = (*knot)->x[i] < min ? (*knot)->x[i] : min;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		(*knot)->x[i] -= min;
		i++;
	}
}

static void	shift_y(t_tetra **knot)
{
	short int			min;
	short int			i;

	i = 0;
	min = 3;
	while (i < 4)
	{
		min = (*knot)->y[i] < min ? (*knot)->y[i] : min;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		(*knot)->y[i] -= min;
		i++;
	}
}

void		shifts(t_tetra **knot)
{
	shift_x(knot);
	shift_y(knot);
}

void		input_coordinates(t_tetra **knot, int a, int b)
{
	if (a < 4)
	{
		(*knot)->x[b] = a;
		(*knot)->y[b] = 0;
	}
	else if (a > 4 && a < 9)
	{
		(*knot)->x[b] = a - 5;
		(*knot)->y[b] = 1;
	}
	else if (a > 9 && a < 14)
	{
		(*knot)->x[b] = a - 10;
		(*knot)->y[b] = 2;
	}
	else if (a > 14 && a < 19)
	{
		(*knot)->x[b] = a - 15;
		(*knot)->y[b] = 3;
	}
}
