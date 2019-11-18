/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:13:06 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 12:13:06 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	symb;
	char	*str;
	size_t	i;

	str = (char *)s;
	symb = (char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == symb)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
