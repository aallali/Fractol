/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse_click.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 23:15:01 by aallali           #+#    #+#             */
/*   Updated: 2020/01/27 23:15:02 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_zoom_pos(double *zr, int btn, t_allali *w, int xy[2])
{
	t_map map;

	if (btn == 4 || btn == 5)
	{
		ft_fill_map_x(&map, *w, xy[0]);
		w->mtx = (double)map_allali(map);
		ft_fill_map_y(&map, *w, xy[1]);
		w->mty = (double)map_allali(map);
		w->sx = ((double)(w->sx - w->mtx) * *zr) + w->mtx;
		w->sy = ((double)(w->sy - w->mty) * *zr) + w->mty;
		w->ex = ((double)(w->ex - w->mtx) * *zr) + w->mtx;
		w->ey = ((double)(w->ey - w->mty) * *zr) + w->mty;
	}
}

int		mouse_click(int button, int x, int y, t_allali *w)
{
	double	zoomrate;
	int		xy[2];

	zoomrate = 0;
	xy[0] = x;
	xy[1] = y;
	ft_button_1(button, w);
	ft_zoom_in(&zoomrate, button, w);
	ft_zoom_out(&zoomrate, button, w);
	ft_button_2(button, w);
	ft_button_3(button, w);
	ft_zoom_pos(&zoomrate, button, w, xy);
	aa_fractal(w);
	return (0);
}
