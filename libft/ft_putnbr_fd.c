/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:11:56 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/11 22:43:10 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int				i;
	int				pw;
	unsigned int	n;

	i = 0;
	n = (nb < 0) ? (-nb) : nb;
	pw = ft_num_count(n) - 1;
	if (nb < 0)
		ft_putchar_fd('-', fd);
	while (pw > -1)
	{
		ft_putchar_fd(((pw == 0) ? n + '0' : (n / ft_pow10(pw)) + '0'), fd);
		i++;
		n = (pw == 1 && nb < 0) ? n - ((n / ft_pow10(pw)) * ft_pow10(pw))
		: n - ((n / ft_pow10(pw)) * ft_pow10(pw));
		pw--;
	}
}
