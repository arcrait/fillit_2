/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:12:25 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 13:12:25 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t len)
{
	size_t len_dst;
	size_t i;

	i = 0;
	len_dst = ft_strlen(dst);
	while (src[i] && i < len)
	{
		dst[len_dst++] = src[i++];
	}
	dst[len_dst] = '\0';
	return (dst);
}
