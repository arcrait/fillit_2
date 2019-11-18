/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:08:02 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 13:08:02 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqr(int nbr, int power)
{
	int previous;
	int save;

	save = nbr;
	while (power > 1)
	{
		previous = nbr;
		nbr *= save;
		if (previous > nbr)
			return (save < 0 ? 0 : -1);
		power--;
	}
	return (nbr);
}
