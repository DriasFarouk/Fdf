/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdrias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:26:32 by fdrias            #+#    #+#             */
/*   Updated: 2018/03/14 17:25:41 by fdrias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <unistd.h>
# include "libft/libft.h"
# include "minilibx_macos/mlx.h"
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

# define WIN_H 1200
# define WIN_W 1900

# define BLUE 0x0041FF
# define BROWN 0xAD4F09
# define GREEN 0x25FF50
# define WHITE 0xFFFFFF
# define RED 0xFF0000
# define PINK 0xFFC0CB
# define GREY 0x808080
# define YELLOW 0xFFFF00

typedef struct s_point
{
	int		x;
	int		y;
	int		z;
	int		ty;
	int		tx;
	int		color;
}			t_point;

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	char		*data;
	void		*img;
	int			sizeline;
	int			endian;
	int			bpp;
	t_point		**map;
	char		*path;
	float		angle;
	int			map_x;
	int			map_y;
	int			map_z;
	int			pad;
	int			move_x;
	int			move_y;
	int			pad_h;
}				t_env;

typedef struct	s_bresenham
{
	int		delta_x;
	int		sign_x;
	int		delta_y;
	int		sign_y;
	int		delta_error;
}				t_bres;

int		check_x(t_env *e, int x);
int		check_y(t_env *e, int y);
int		create_x(t_env *e, int x);
int		create_y(t_env *e, int y);
void	draw_map(t_env *e);
void	draw_line(t_env *e, t_point *point1, t_point *point2);
void	draw_point(t_env *e, int x, int y, int color);
int		choose_color(int p1, int p2, int max);
t_bres	*bres_construct(t_point *point1, t_point *point2, int max);
void	calcule_coord(t_env *e);
void	calculate(t_env *e, t_point *pt);
void	put_info_to_windows(t_env *e);
void	put_meta(t_env *e);
void	erase(t_env *e);
int		len_tab(char *argv);
int		count_map_lenght(char **str);
void	default_mode(t_env *e);
int		count_map_height(t_point **grid);
int		search_number(char *str);
t_point	ft_create_point(char *str, int x, int y);
t_point	*create_int_table(t_env *e, char *str, int pos);
t_point	**create_map(t_env *e);
int		expose_hook(t_env *e);;
int		key_hook(int keycode, t_env *e);
int		mouse_hook(int button, int x, int y, t_env *e);
void	ft_import_map(t_env *e);
void	increase_pike(t_env *e);
void	decrease_pike(t_env *e);
void	rotation_left(t_env *e);
void	rotation_right(t_env *e);
void	move_image_up(t_env *e);
void	move_image_down(t_env *e);
void	move_image_left(t_env *e);
void	move_image_right(t_env *e);
void	zoom_map(t_env *e);
void	de_zoom_map(t_env *e);

#endif
