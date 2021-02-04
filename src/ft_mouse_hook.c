/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse_hook.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <aallali@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 17:23:40 by aallali           #+#    #+#             */
/*   Updated: 2021/02/04 17:23:42 by aallali          ###   ########.fr       */
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
