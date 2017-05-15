/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expose.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 19:52:15 by pabonnin          #+#    #+#             */
/*   Updated: 2017/05/11 20:53:05 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_expose(t_mlx	*env)
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
