/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:33:37 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/11 22:40:03 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int nb)
{
	char			*ret;
	int				i;
	int				pw;
	unsigned int	n;

	i = 0;
	n = (nb < 0) ? (-nb) : nb;
	pw = ft_num_count(n) - 1;
	ret = (char *)malloc(sizeof(char) * (ft_num_count(n) + (nb < 0 ? 2 : 1)));
	if (ret == NULL)
		return (NULL);
	if (nb < 0)
	{
		ret[0] = '-';
		i++;
	}
	while (pw > -1)
	{
		ret[i++] = (pw == 0) ? n + '0' : (n / ft_pow10(pw)) + '0';
		n = (pw == 1 && nb < 0) ? n - ((n / ft_pow10(pw)) * ft_pow10(pw))
		: n - ((n / ft_pow10(pw)) * ft_pow10(pw));
		pw--;
	}
	ret[i] = '\0';
	return (ret);
}
