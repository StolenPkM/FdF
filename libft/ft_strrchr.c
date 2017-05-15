/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 00:13:32 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/09 09:13:52 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	if (s != NULL)
	{
		while (*s)
			s++;
		if ((char)c == '\0')
			return ((char *)s);
		s--;
		while (*s != (char)c && *s)
			s--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
