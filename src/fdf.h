/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 14:54:07 by pabonnin          #+#    #+#             */
/*   Updated: 2017/05/15 12:11:39 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <math.h>
# include "/Users/pabonnin/Downloads/minilibx_macos/mlx.h"
# include "../libft/includes/libft.h"

# define	COLOR1  0x00FF0000
# define	COLOR2  0x0000FF00

typedef struct s_mlx
{
	void		*mlx;
	void		*win;
	int			nbl;
	int			nbi;
	int			**tab;
	int			zoom;
	int			xmove;
	int			ymove;
	double		x;
	double		y;
	double		z;
	double		x0;
	double		x1;
	double		y0;
	double		y1;
}				t_mlx;

int		count_lines(int fd);
int		**tab_init(char *arg, int fd, t_mlx *bit);
int		ft_draw(t_mlx *env);
int		map_init(char *arg, int fd);
int		ft_expose(t_mlx *env);
void	fdf_error(int i);

#endif