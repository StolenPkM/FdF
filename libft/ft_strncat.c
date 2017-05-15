/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:36:11 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/08 23:25:47 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = (size_t)ft_strlen(dest);
	if (dest != NULL)
	{
		while (i < n && src[i] != '\0')
		{
			dest[i + j] = src[i];
			i++;
		}
		dest[i + j] = '\0';
	}
	return (dest);
}
