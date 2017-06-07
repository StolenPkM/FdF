/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 17:50:45 by pabonnin          #+#    #+#             */
/*   Updated: 2017/06/07 14:32:05 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	fdf_error(int i)
{
	if (i == 1)
		ft_putstr_fd("Read Error!\n", 2);
	if (i == 2)
		ft_putstr_fd("Malloc Error!\n", 2);
	if (i == 3)
		ft_putstr_fd("Usage : ./fdf Input File/", 2);
	if (i == 4)
		ft_putstr_fd("error: BUFF_SIZE must be greater than 0\n", 2);
	if (i == 5)
		ft_putstr_fd("error: lines are not at the same length\n", 2);
	exit(1);
}

void	fdf_check(t_mlx *env)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	
	while(env->tab[i][j])
		j++;
	k = j;
	i++;
	j = 0;
	while(env->tab[i++][j])
	{
		while(env->tab[i][j++])
			j++;
		if (k != j)
			fdf_error(5);
	}
}
