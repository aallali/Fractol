/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse_hook.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 23:06:09 by aallali           #+#    #+#             */
/*   Updated: 2020/01/27 23:06:11 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_button_1(int button, t_allali *w)
{
	if (button == 1)
	{
		if (w->block == 0)
			w->block = 1;
		else
			w->block = 0;
	}
}

void	ft_zoom_in(double *zoomrate, int button, t_allali *w)
{
	if (button == 4)
	{
		w->maxitr = w->maxitr - 1;
		*zoomrate = 1.0 / 0.8;
	}
}

void	ft_zoom_out(double *zoomrate, int button, t_allali *w)
{
	if (button == 5)
	{
		w->maxitr = w->maxitr + 1;
		*zoomrate = 0.8;
	}
}

void	ft_button_2(int button, t_allali *w)
{
	if (button == 2)
	{
		w->type++;
		if (w->type > 2)
			w->type = 0;
	}
}

void	ft_button_3(int button, t_allali *w)
{
	if (button == 3)
		init_struct_vars(w);
}
