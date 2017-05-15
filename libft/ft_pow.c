/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 21:03:42 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/12 21:28:38 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_pow(double n, double p)
{
	double	n_cp;

	n_cp = n;
	if (p > 0)
	{
		while (p-- > 1)
			n_cp *= n;
	}
	else if (p < 0)
		n_cp = 1 / (ft_pow(n_cp, -p));
	else
		return (1);
	return (n_cp);
}
