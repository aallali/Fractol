/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 23:08:46 by aallali           #+#    #+#             */
/*   Updated: 2020/01/27 23:08:48 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_fill_map_x(t_map *map, t_allali w, int x)
{
	map->s1 = 0;
	map->e1 = w.ww;
	map->s2 = w.sx;
	map->e2 = w.ex;
	map->x = x;
}

void	ft_fill_map_y(t_map *map, t_allali w, int y)
{
	map->s1 = 0;
	map->e1 = w.wh;
	map->s2 = w.sy;
	map->e2 = w.ey;
	map->x = y;
}
