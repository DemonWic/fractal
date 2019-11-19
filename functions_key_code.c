/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_key_code.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:14:17 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 13:14:20 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		key_press(int key, void *fdf)
{
	t_window	*win;

	win = fdf;
	if (key == SPACE)
		win->back_colour = change_colour(win);
	else if (key == MAIN_PAD_ESC)
		exit(0);
	else if (key == ARROW_UP)
		win->var.y1 += 30 / win->var.zoom;
	else if (key == ARROW_DOWN)
		win->var.y1 -= 30 / win->var.zoom;
	else if (key == ARROW_LEFT)
		win->var.x1 += 30 / win->var.zoom;
	else if (key == ARROW_RIGHT)
		win->var.x1 -= 30 / win->var.zoom;
	else if (key == MAIN_PAD_1 || key == MAIN_PAD_2 ||
		key == MAIN_PAD_3 || key == MAIN_PAD_4)
		key_press_two(key, fdf);
	else
		return (0);
	mlx_clear_window(win->mlx, win->win);
	fractol_while(win);
	return (0);
}

void	key_press_two(int key, void *fdf)
{
	t_window	*win;

	win = fdf;
	if (key == MAIN_PAD_1)
	{
		win->type_fractol = 1;
		fractol_init(win);
	}
	if (key == MAIN_PAD_2)
	{
		win->type_fractol = 2;
		fractol_init(win);
	}
	if (key == MAIN_PAD_3)
	{
		win->type_fractol = 3;
		fractol_init(win);
	}
	if (key == MAIN_PAD_4)
	{
		win->type_fractol = 4;
		fractol_init(win);
	}
}

void	zoom_in_or_out(int keys, int x, int y, t_window *win)
{
	double new_x;
	double new_y;

	if (keys == 4 || keys == 5)
	{
		new_x = (x / win->var.zoom + win->var.x1);
		new_y = (y / win->var.zoom + win->var.y1);
		if (keys == 4)
			win->var.zoom *= 1.3;
		else
			win->var.zoom /= 1.3;
		win->var.x1 = new_x - (x / win->var.zoom);
		win->var.y1 = new_y - (y / win->var.zoom);
		mlx_clear_window(win->mlx, win->win);
		fractol_while(win);
	}
}

void	mouse_key(int keys, int x, int y, t_window *win)
{
	if (keys == 1)
	{
		if (win->flag_mouse == 1)
			win->flag_mouse = 0;
		else
			win->flag_mouse = 1;
	}
	if (keys == 4 || keys == 5)
		zoom_in_or_out(keys, x, y, win);
}

void	mouse_julia(int x, int y, t_window *win)
{
	if (win->flag_mouse == 1 && win->type_fractol == 2)
	{
		win->var.dy2 = (double)(x - (double)SIZE / 2) / ((double)SIZE / 2);
		win->var.dy = (double)(y - (double)SIZE / 2) / ((double)SIZE / 2);
		mlx_clear_window(win->mlx, win->win);
		fractol_while(win);
	}
}
