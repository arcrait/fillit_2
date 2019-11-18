/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 11:40:54 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/11 13:15:35 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static t_tetra	*new_list(int symbol)
{
	t_tetra *new_element;

	if (!(new_element = (t_tetra *)malloc(sizeof(t_tetra))))
		return (NULL);
	new_element->letter = symbol;
	new_element->last_x = 0;
	new_element->last_y = 0;
	new_element->prev = NULL;
	new_element->next = NULL;
	return (new_element);
}

static t_tetra	*find_list(t_tetra **start, int i)
{
	t_tetra	*knot;
	t_tetra	*new_element;
	int		k;

	if (!(*start))
		return (*start = new_list(65));
	knot = *start;
	k = 1;
	while (i > 21)
	{
		if (knot->letter == (k + 65))
			return (knot);
		if (knot->next == NULL)
			break ;
		knot = knot->next;
		k++;
		i -= 21;
	}
	new_element = new_list(k + 65);
	new_element->prev = knot;
	knot->next = new_element;
	return (new_element);
}

static void		input_list(char *tetra, t_tetra **start, int i)
{
	t_tetra		*knot;
	int			a;
	int			b;

	a = 0;
	b = 0;
	knot = find_list(start, i);
	while (a < 20)
	{
		if (tetra[a] == '#' && b < 4)
		{
			input_coordinates(&knot, a, b);
			b++;
		}
		a++;
	}
	shifts(&knot);
}

t_tetra			*create_list(t_tetra **start, int size, char *buff)
{
	char	*tetra;
	int		i;

	i = 0;
	while (i < size)
	{
		if (!(tetra = ft_strsub(buff, i, 20)))
			return (NULL);
		input_list(tetra, start, i);
		free(tetra);
		i += 21;
	}
	return (*start);
}
