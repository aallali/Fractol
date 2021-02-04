/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:09:12 by aallali           #+#    #+#             */
/*   Updated: 2020/01/28 10:09:13 by aallali          ###   ########.fr       */
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
