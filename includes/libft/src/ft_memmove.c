/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:13:37 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 12:13:37 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (s > d)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (s < d)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	return (dst);
}
