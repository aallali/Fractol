/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:22:57 by aallali           #+#    #+#             */
/*   Updated: 2021/02/04 17:23:09 by aallali          ###   ########.fr       */
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
