/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fractal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 23:11:33 by aallali           #+#    #+#             */
/*   Updated: 2020/01/27 23:11:36 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_type_fractol(t_allali *w)
{
	w->cx = w->type == 1 ? w->mx : w->x;
	w->cy = w->type == 1 ? w->my : w->y;
	w->frct = w->type == 2 ? -2 : 2;
}

void	ft_loop_fractol(t_allali *w)
{
	while (w->n < w->maxitr)
	{
		w->tmp = w->x * w->x - w->y * w->y;
		w->y = w->frct * w->x * w->y + w->cy;
		w->x = w->tmp + w->cx;
		if (w->x * w->x + w->y * w->y > 4)
			break ;
		w->n++;
	}
	if (w->n == w->maxitr)
		w->n = 0;
}

/*
**	ft_pixel , fill the pixels in the window
*/

void	ft_pixel(int x, int y, t_allali *w, int n)
{
	int i;

	i = y * w->ww * 4 + x * 4;
	w->pixels[i++] = n * w->colors[0] * 2;
	w->pixels[i++] = n * w->colors[0] * 4;
	w->pixels[i++] = n * w->colors[0] * 10;
	w->pixels[i++] = 0;
}

void	aa_fractal(t_allali *w)
{
	t_map map;

	w->yi = 0;
	while (w->yi < w->ww)
	{
		w->xi = 0;
		while (w->xi < w->wh)
		{
			w->n = 0;
			ft_fill_map_x(&map, *w, w->xi);
			w->x = (double)map_allali(map);
			ft_fill_map_y(&map, *w, w->yi);
			w->y = (double)map_allali(map);
			ft_type_fractol(w);
			ft_loop_fractol(w);
			ft_pixel(w->xi, w->yi, w, w->n);
			w->xi++;
		}
		w->yi++;
	}
	mlx_put_image_to_window(w->ptr, w->win, w->img, 0, 0);
}
