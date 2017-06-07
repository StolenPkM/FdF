/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 17:50:45 by pabonnin          #+#    #+#             */
/*   Updated: 2017/06/07 21:16:33 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		fdf_error(int i)
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
	if (i == 6)
		ft_putstr_fd("error: caracter must be a digit or space\n", 2);
	if (i == 7)
		ft_putstr_fd("error: bad file or file too big\n", 2);
	exit(1);
}

void		fdf_check(char *line)
{
	int	i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] < '0' || line[i] > '9')
		{
			if (line[i] != '-' && line[i] != ' ')
				fdf_error(6);
		}
		i++;
	}
}
