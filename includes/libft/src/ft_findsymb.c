/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findsymb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:01:20 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 12:01:20 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_findsymb(const char *s, int c)
{
	unsigned char symb;

	if (!s)
		return (NULL);
	symb = (unsigned char)c;
	while (*s != symb)
	{
		if (!*s++)
			return (NULL);
	}
	return ((char *)s);
}
