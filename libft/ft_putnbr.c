/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:48:12 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/11 22:13:38 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int				i;
	int				pw;
	unsigned int	n;

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
