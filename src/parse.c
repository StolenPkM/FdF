/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 13:36:12 by pabonnin          #+#    #+#             */
/*   Updated: 2017/06/09 16:31:17 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			count_num_line(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			count_lines(int fd)
{
	int		i;
	int		r_byte;
	char	buf[2];

	i = 0;
	if ((r_byte = read(fd, buf, 1)) == 0)
		fdf_error(7);
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

int			**tab_init(char *arg, int fd, t_mlx *env)
{
	int		**tab;
	char	*line;
	char	**tmp;

	line = NULL;
	fd = open(arg, O_RDONLY);
	tab = (int **)malloc(sizeof(int *) * env->nbl);
	while (get_next_line(fd, &line) > 0)
	{
		env->j = 0;
		tmp = ft_strsplit(line, ' ');
		fdf_check(line);
		env->nbi = count_num_line(tmp);
		if (env->check != 0 && env->check != env->nbi)
			fdf_error(5);
		env->check = env->nbi;
		tab[env->i] = (int *)malloc(sizeof(int) * env->nbi);
		while (env->j < env->nbi)
		{
			tab[env->i][env->j] = ft_atoi(tmp[env->j]);
			env->j++;
		}
		env->i++;
	}
	return (tab);
}
