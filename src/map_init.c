/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 11:19:03 by pabonnin          #+#    #+#             */
/*   Updated: 2017/06/07 21:29:46 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

static void		ft_draw_line(t_mlx *env)
{
	double	arret;
	float	dx;
	float	dy;

	arret = 0.0;
	dx = env->x1 - env->x0;
	dy = env->y1 - env->y0;
	while (arret <= 1)
	{
		env->x = env->x0 + (dx * arret);
		env->y = env->y0 + (dy * arret);
		mlx_pixel_put(env->mlx, env->win, env->x + env->xmove,
				env->y + env->ymove, 0x00FFFFFF);
		arret += 1. / ft_sqrt((dx * dx) + (dy * dy));
	}
}

static void		ft_verti(t_mlx *env, int j, int i)
{
	env->x0 = 50 + (i * env->zoom) + (j * env->zoom);
	env->x1 = 50 + (i * env->zoom) + ((j + 1) * env->zoom);
	env->y0 = ((700 + (j * env->zoom)) * 1. / 2.) - (((i * env->zoom)
				+ (env->z * env->tab[j][i])) * 1. / 2.);
	env->y1 = ((700 + ((j + 1) * env->zoom)) * 1. / 2.) - (((i * env->zoom)
				+ (env->z * env->tab[j + 1][i])) * 1. / 2.);
	ft_draw_line(env);
}

static void		ft_hori(t_mlx *env, int j, int i)
{
	env->x0 = 50 + (i * env->zoom) + (j * env->zoom);
	env->x1 = 50 + ((i + 1) * env->zoom) + (j * env->zoom);
	env->y0 = ((700 + (j * env->zoom)) * 1. / 2.) - (((i * env->zoom)
				+ (env->z * env->tab[j][i])) * 1. / 2.);
	env->y1 = ((700 + (j * env->zoom)) * 1. / 2.) - ((((i + 1) * env->zoom)
				+ (env->z * env->tab[j][i + 1])) * 1. / 2.);
	ft_draw_line(env);
}

int				ft_draw(t_mlx *env)
{
	int	i;
	int	j;

	j = 0;
	while (j < env->nbl)
	{
		i = 0;
		while (i < env->nbi - 1)
			ft_hori(env, j, i++);
		j++;
	}
	j = 0;
	while (j < env->nbl - 1)
	{
		i = 0;
		while (i < env->nbi)
			ft_verti(env, j, i++);
		j++;
	}
	return (0);
}

int				map_init(char *arg, int fd)
{
	t_mlx	env;

	fd = open(arg, O_RDONLY);
	env.z = 1.5;
	env.xmove = 0;
	env.ymove = 0;
	env.i = 0;
	env.j = 0;
	env.check = 0;
	env.nbl = count_lines(fd);
	env.tab = tab_init(arg, fd, &env);
	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, 800, 800, "FDF");
	if (env.nbl >= env.nbi)
		env.zoom = 400 / env.nbl;
	else
		env.zoom = 400 / env.nbi;
	mlx_expose_hook(env.win, &ft_expose_hook, &env);
	mlx_key_hook(env.win, &ft_key_hook, &env);
	mlx_loop(env.mlx);
	return (0);
}
