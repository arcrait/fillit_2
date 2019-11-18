/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_red.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:05:20 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/11 14:05:20 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_exit_red(char *error_message)
{
	ft_putstr("\033[31m");
	ft_putendl(error_message);
	ft_putstr("\033[0");
	exit(0);
}
