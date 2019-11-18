/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 12:13:45 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 12:13:45 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*str;
	unsigned char	symb;

	i = 0;
	str = (char *)b;
	symb = (unsigned char)c;
	while (i < len)
	{
		str[i] = symb;
		i++;
	}
	return (b);
}
