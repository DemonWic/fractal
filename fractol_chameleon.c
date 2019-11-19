/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_chameleon.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:13:35 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 13:13:38 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_var		init_chameleon(void)
{
	t_var var;

	var.x = 0;
	var.y = 0;
	var.dx = 0;
	var.dx2 = 0;
	var.dy = 0.29;
	var.dy2 = 0.02;
	var.zoom = SIZE / 4;
	var.x1 = -2;
	var.y1 = -2;
	var.iteration = 0;
	var.iterations_max = 140;
	var.colour = 0xf9542b;
	return (var);
}

void		chameleon(t_window *win)
{
	double tmp;

	win->var.dx = win->var.x / win->var.zoom + win->var.x1;
	win->var.dx2 = win->var.y / win->var.zoom + win->var.y1;
	win->var.iteration = 0;
	while (win->var.dx * win->var.dx + win->var.dx2 * win->var.dx2 < 4 &&
		win->var.iteration < win->var.iterations_max)
	{
		tmp = win->var.dx;
		win->var.dx = win->var.dx * win->var.dx - win->var.dx2 * win->var.dx2 +
			win->var.dy;
		win->var.dx2 = -2 * win->var.dx2 * tmp + win->var.dy2;
		win->var.iteration++;
	}
	fractol_paint(win);
	win->i++;
}
