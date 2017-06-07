/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabonnin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 18:16:39 by pabonnin          #+#    #+#             */
/*   Updated: 2017/06/07 14:10:55 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int argc, char **argv)
{
	int		fd;

	fd = open(argv[1], O_RDONLY);
	if (argc != 2)
		fdf_error(3);
	if (BUFF_SIZE < 1)
		fdf_error(4);
	map_init(argv[1], fd);
	return (0);
}
