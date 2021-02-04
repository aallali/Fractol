/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 23:00:06 by aallali           #+#    #+#             */
/*   Updated: 2020/01/27 23:00:08 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_move_left(t_allali *w)
{
	double tmp;

	tmp = 0.1 * (w->ex - w->sx);
	w->ex += 0.1 * (w->ex - w->sx);
	w->sx += tmp;
}

void	ft_move_right(t_allali *w)
{
	double tmp;

	tmp = 0.1 * (w->ex - w->sx);
	w->ex -= 0.1 * (w->ex - w->sx);
	w->sx -= tmp;
}

void	ft_move_up(t_allali *w)
{
	double tmp;

	tmp = 0.1 * (w->ey - w->sy);
	w->ey += 0.1 * (w->ey - w->sy);
	w->sy += tmp;
}

void	ft_move_down(t_allali *w)
{
	double tmp;

	tmp = 0.1 * (w->ey - w->sy);
	w->ey -= 0.1 * (w->ey - w->sy);
	w->sy -= tmp;
}

int		key_press(int key, t_allali *w)
{
	if (key == 124)
		ft_move_right(w);
	else if (key == 123)
		ft_move_left(w);
	else if (key == 125)
		ft_move_down(w);
	else if (key == 126)
		ft_move_up(w);
	else if (key == 82)
		w->colors[0] += 1;
	aa_fractal(w);
	return (0);
}
