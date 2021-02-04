/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:20:46 by aallali           #+#    #+#             */
/*   Updated: 2021/02/04 17:21:00 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

double		map_allali(t_map map)
{
	double x;
	double y;
	double z;

	x = map.e2 - map.s2;
	y = map.e1 - map.s1;
	z = map.x - map.s1;
	return ((x / y) * z) + map.s2;
}

void		init_struct_vars(t_allali *w)
{
	w->ww = 600;
	w->wh = 600;
	w->xi = 0;
	w->yi = 0;
	w->x = 0;
	w->y = 0;
	w->n = 0;
	w->maxitr = 17;
	w->tmp = 0;
	w->color = 0xFFFFFF;
	w->cx = 0;
	w->cy = 0;
	w->sx = -2;
	w->ex = 2;
	w->sy = -2;
	w->ey = 2;
	w->frct = 2;
	w->mtx = 0;
	w->mty = 0;
}

void		ft_init_window(t_allali *w)
{
	int			bpp;
	int			sizeline;
	int			endian;

	w->ptr = mlx_init();
	w->win = mlx_new_window(w->ptr, w->ww, w->wh, " Allali's Fratcals ");
	w->img = mlx_new_image(w->ptr, w->ww, w->wh);
	w->pixels = mlx_get_data_addr(w->img, &bpp, &sizeline, &endian);
	w->colors[0] = 1;
	w->colors[1] = 7;
	w->colors[2] = 9;
	w->block = 1;
}

int			main(int ac, char **av)
{
	t_allali	w;

	if (ac == 2)
	{
		if (ft_strcmp(av[1], "mandelbrot") == 0)
			w.type = 0;
		else if (ft_strcmp(av[1], "julia") == 0)
			w.type = 1;
		else if (ft_strcmp(av[1], "three") == 0)
			w.type = 2;
		else
		{
			ft_putstr("Usage /fractol \"mandelbrot\", \"julia\", \"three\"");
			return (0);
		}
		init_struct_vars(&w);
		ft_init_window(&w);
		aa_fractal(&w);
		ft_mlx_hooks(&w);
	}
	else
		ft_putstr("Usage /fractol \"mandelbrot\", \"julia\", \"three\"");
	return (0);
}
