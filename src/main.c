/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:50:25 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/14 11:08:11 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include <fcntl.h>

int			main(int argc, char **argv)
{
	int				fd;
	int				rd;
	char			buff[600];
	static t_tetra	*start;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		rd = read(fd, buff, 600);
		buff[rd] = '\0';
		rd = valid(buff, rd);
		if (rd == 0 || !(start = create_list(&start, rd, buff)))
			ft_exit("error");
		main_move(&start, rd + 1);
	}
	else
		write(1, "usage: ./fillit target_filename\n", 32);
	return (0);
}
