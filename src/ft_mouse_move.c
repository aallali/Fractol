/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:23:47 by aallali           #+#    #+#             */
/*   Updated: 2021/02/04 17:23:48 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			mouse_move(int x, int y, t_allali *w)
{
	t_map map;

	if (w->block == 1)
	{
		ft_fill_map_x(&map, *w, x);
		w->mx = (double)map_allali(map);
		ft_fill_map_y(&map, *w, y);
		w->my = (double)map_allali(map);
		aa_fractal(w);
	}
	return (0);
}
