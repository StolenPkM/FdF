/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 13:36:12 by pabonnin          #+#    #+#             */
/*   Updated: 2017/05/15 12:23:32 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			count_num_line(char **str);
int		count_lines(int fd)
{
	int		i;
	int		r_byte;
	char	buff[2];

	i = 0;
	while ((r_byte = read(fd, buff, 1)) > 0)
	{
		if (buff[0] == '\n')
			i++;
	}
	return (i);
}

int		**tab_init(char *arg, int fd, t_mlx *mlx)
{
	int		i;
	int		j;
	int		**tab;
	char 	*line;
	char	**tmp;

	i = 0;
	j = 0;
	line = NULL;
	close(fd);
	fd = open(arg, O_RDONLY);
	tab = (int **)malloc(sizeof(int *) * mlx->nbl);
	i = 0;
	if (!tab)
		return (NULL);
	while (get_next_line(fd, &line) > 0)
	{
		tmp = ft_strsplit(line, ' ');
		mlx->nbi = count_num_line(tmp);
		tab[i] = (int *)malloc(sizeof(int) * mlx->nbi);
		while (j < mlx->nbi)
		{
			tab[i][j] = ft_atoi(tmp[j]);
			j++;
		}
		i++;
	}
	return (tab);
}

int			count_num_line(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
