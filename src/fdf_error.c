/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 17:50:45 by pabonnin          #+#    #+#             */
/*   Updated: 2017/05/11 21:04:42 by pabonnin         ###   ########.fr       */
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
	exit(1);
}
