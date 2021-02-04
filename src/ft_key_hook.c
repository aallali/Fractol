/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:22:46 by aallali           #+#    #+#             */
/*   Updated: 2021/02/04 17:22:48 by aallali          ###   ########.fr       */
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
