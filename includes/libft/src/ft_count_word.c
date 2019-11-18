/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:01:14 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 12:01:14 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(const char *s, char c)
{
	unsigned int i;
	unsigned int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			if (s[i + 1] == c)
				count++;
			if (!(s[i + 1]))
				return (count);
			i++;
		}
		i++;
	}
	return (count);
}
