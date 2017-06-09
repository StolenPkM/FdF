/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsidler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/18 15:05:30 by fsidler           #+#    #+#             */
/*   Updated: 2017/06/09 11:42:58 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				ft_expose_hook(t_mlx *env)
{
	int	x;
	int	y;

	x = 27;
	y = 34;
	while (x <= 180)
		mlx_pixel_put(env->mlx, env->win, x++, y, COLOR1);
	while (y <= 117)
		mlx_pixel_put(env->mlx, env->win, x, y++, COLOR1);
	while (x >= 27)
		mlx_pixel_put(env->mlx, env->win, x--, y, COLOR1);
	while (y >= 34)
		mlx_pixel_put(env->mlx, env->win, x, y--, COLOR1);
	mlx_string_put(env->mlx, env->win, 35, 35, COLOR2, "Quit = ESC");
	mlx_string_put(env->mlx, env->win, 35, 55, COLOR2, "Move = ^ v < >");
	mlx_string_put(env->mlx, env->win, 35, 75, COLOR2, "Zoom = + -");
	mlx_string_put(env->mlx, env->win, 35, 95, COLOR2, "Depth = w s");
	ft_draw(env);
	return (0);
}

static int		ft_key3(int keycode, t_mlx *env)
{
	if (keycode == 13)
	{
		if (env->z <= 30.)
			env->z += 0.3;
		mlx_clear_window(env->mlx, env->win);
		ft_expose_hook(env);
	}
	if (keycode == 1)
	{
		if (env->z >= -30.)
			env->z -= 0.3;
		mlx_clear_window(env->mlx, env->win);
		ft_expose_hook(env);
	}
	return (0);
}

static int		ft_key2(int keycode, t_mlx *env)
{
	if (keycode == 126)
	{
		env->ymove -= 30;
		mlx_clear_window(env->mlx, env->win);
		ft_expose_hook(env);
	}
	if (keycode == 69)
	{
		if (env->zoom <= 95)
			env->zoom += 1;
		mlx_clear_window(env->mlx, env->win);
		ft_expose_hook(env);
	}
	if (keycode == 78)
	{
		if (env->zoom >= -35)
			env->zoom -= 1;
		mlx_clear_window(env->mlx, env->win);
		ft_expose_hook(env);
	}
	ft_key3(keycode, env);
	return (0);
}

int				ft_key_hook(int keycode, t_mlx *env)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 123)
	{
		env->xmove -= 30;
		mlx_clear_window(env->mlx, env->win);
		ft_expose_hook(env);
	}
	if (keycode == 124)
	{
		env->xmove += 30;
		mlx_clear_window(env->mlx, env->win);
		ft_expose_hook(env);
	}
	if (keycode == 125)
	{
		env->ymove += 30;
		mlx_clear_window(env->mlx, env->win);
		ft_expose_hook(env);
	}
	ft_key2(keycode, env);
	return (0);
}
