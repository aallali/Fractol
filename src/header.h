/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:24:37 by aallali           #+#    #+#             */
/*   Updated: 2021/02/04 17:24:40 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "../minilibx/mlx.h"
# include "unistd.h"

typedef struct		s_allali
{
	char	*pixels;
	int		type;
	int		xi;
	int		yi;
	int		color;
	int		n;
	int		maxitr;
	int		block;
	int		frct;
	int		ww;
	int		wh;
	int		colors[3];
	double	sx;
	double	ex;
	double	sy;
	double	ey;
	double	tmp;
	double	x;
	double	y;
	double	cx;
	double	cy;
	double	mx;
	double	my;
	double	mtx;
	double	mty;
	void	*ptr;
	void	*win;
	void	*img;
}					t_allali;

typedef struct		s_map
{
	int		s1;
	int		e1;
	int		x;

	double	s2;
	double	e2;
}					t_map;

int					key_press(int key, t_allali *w);
void				aa_fractal(t_allali *w);
int					mouse_click(int button, int x, int y, t_allali *w);
int					mouse_move(int x, int y, t_allali *w);
void				ft_mlx_hooks(t_allali *w);

void				ft_fill_map_x(t_map *map, t_allali w, int x);
void				ft_fill_map_y(t_map *map, t_allali w, int y);
void				init_struct_vars(t_allali *w);
double				map_allali(t_map map);
void				ft_pixel(int x, int y, t_allali *w, int n);

int					ft_strcmp(const char *s1, const char *s2);
void				ft_putstr(char const *s);
void				ft_putchar(char c);

void				ft_button_1(int button, t_allali *w);
void				ft_zoom_in(double *zoomrate, int button, t_allali *w);
void				ft_zoom_out(double *zoomrate, int button, t_allali *w);
void				ft_button_2(int button, t_allali *w);
void				ft_button_3(int button, t_allali *w);
void				ft_zoom_pos(double *zr, int btn, t_allali *w, int xy[2]);
#endif
