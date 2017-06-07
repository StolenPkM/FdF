/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 13:36:12 by pabonnin          #+#    #+#             */
/*   Updated: 2017/06/07 21:32:30 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			count_num_line(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	if (i > 500)
		fdf_error(7);
	return (i);
}

int			count_lines(int fd)
{
	int		i;
	int		r_byte;
	char	buf[2];

	i = 0;
	while ((r_byte = read(fd, buf, 1)) > 0)
	{
		if ((buf[0] < '0' || buf[0] > '9') &&
				buf[0] != ' ' && buf[0] != '-' && buf[0] != '\n')
			fdf_error(6);
		if (buf[0] == '\n')
			i++;
	}
	if ((r_byte = read(fd, buf, 1)) < 0)
		fdf_error(1);
	return (i);
}

int			**tab_init(char *arg, int fd, t_mlx *mlx)
{
	int		**tab;
	char	*line;
	char	**tmp;

	line = NULL;
	fd = open(arg, O_RDONLY);
	tab = (int **)malloc(sizeof(int *) * mlx->nbl);
	while (get_next_line(fd, &line) > 0)
	{
		mlx->j = 0;
		tmp = ft_strsplit(line, ' ');
		fdf_check(line);
		mlx->nbi = count_num_line(tmp);
		if (mlx->check != 0 && mlx->check != mlx->nbi)
			fdf_error(5);
		mlx->check = mlx->nbi;
		tab[mlx->i] = (int *)malloc(sizeof(int) * mlx->nbi);
		while (mlx->j < mlx->nbi)
		{
			tab[mlx->i][mlx->j] = ft_atoi(tmp[mlx->j]);
			mlx->j++;
		}
		mlx->i++;
	}
	return (tab);
}
