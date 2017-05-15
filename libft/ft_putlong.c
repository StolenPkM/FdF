/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <ybenoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:49:04 by ybenoit           #+#    #+#             */
/*   Updated: 2016/12/06 17:52:47 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putlong(long nb)
{
	int i;
	int pw;
	unsigned long n;

	i = 0;
	n = (nb < 0) ? (-nb) : nb;
	pw = ft_num_count(n) - 1;
	if (nb < 0)
		ft_putchar('-');
	while (pw > -1)
	{
		ft_putchar((pw == 0) ? n + '0' : (n / ft_pow10(pw)) + '0');
		i++;
		n = (pw == 1 && nb < 0) ? n - ((n / ft_pow10(pw)) * ft_pow10(pw))
			: n - ((n / ft_pow10(pw)) * ft_pow10(pw));
		pw--;
	}
}
