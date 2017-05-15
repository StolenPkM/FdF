/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 20:10:27 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/12 20:18:06 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpbrk(const char *str, const char *c)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(c);
	while (*str)
	{
		while (i < len)
		{
			if (c[i] == *str)
				return ((char*)str);
			i++;
		}
		str++;
	}
	return (NULL);
}
