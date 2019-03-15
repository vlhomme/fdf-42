/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 15:59:55 by vlhomme           #+#    #+#             */
/*   Updated: 2019/03/15 12:14:13 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define LARGEUR 500
# define HAUTEUR 500

#include "libft/libft.h"
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <mlx.h>


typedef	struct		s_point
{
	int				x;
	int				y;
	int				z;
	int				z1;
	int				x1;
	struct s_point	*next;
}					t_point;

int					**creat_tab(int count_lines);
int					*put_eachvalue_intab(char **eachvalue);
int					ft_count_lines(int fd, char **argv);
int					**parsing(int fd, char **argv);
int					end_by_fdftest(char *s);
int					basic_check(int argc, char **argv);
void				Dxbigger(void *mlx_ptr, void *win_ptr, int couleur, int x, int y, int Dx, int Dy, int xincr, int yincr);
void				Dxsmaller(void *mlx_ptr, void *win_ptr, int x, int y, int Dx, int Dy, int xincr, int yincr);
void				Line(void *mlx_ptr, void *win_ptr, int x1, int y1, int x2, int y2, int couleur);

#endif
