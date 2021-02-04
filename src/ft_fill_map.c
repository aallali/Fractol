/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:21:39 by aallali           #+#    #+#             */
/*   Updated: 2021/02/04 17:21:41 by aallali          ###   ########.fr       */
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
