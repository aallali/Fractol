/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 10:11:51 by aallali           #+#    #+#             */
/*   Updated: 2020/01/28 10:11:52 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_mlx_hooks(t_allali *w)
{
	mlx_hook(w->win, 6, 0, mouse_move, w);
	mlx_hook(w->win, 4, 0, mouse_click, w);
	mlx_hook(w->win, 2, 0, key_press, w);
	mlx_loop(w->ptr);
}
