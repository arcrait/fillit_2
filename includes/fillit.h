/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:19:53 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/12 14:00:36 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE 522
# include "libft.h"

typedef struct			s_tetra
{
	short int			x[4];
	short int			y[4];
	short int			last_x;
	short int			last_y;
	char				letter;
	struct s_tetra		*prev;
	struct s_tetra		*next;
}						t_tetra;

typedef struct			s_xy
{
	short int			x;
	short int			y;
}						t_xy;

int						valid(char *buf, int size);
t_tetra					*create_list(t_tetra **start, int size, char *buff);
void					input_coordinates(t_tetra **knot, int a, int b);
void					shifts(t_tetra **knot);
void					create_map(char ***map, int size);
void					draw_map(t_tetra **knot, char ***map);
void					reset_map(char ***map, t_tetra **knot);
void					free_map(char ***map);
int						main_move(t_tetra **start, int size);

#endif
