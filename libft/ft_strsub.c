/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:48:05 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/09 18:38:17 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	j;

	i = (size_t)start;
	j = 0;
	if (!s)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (size_t)len + 1);
	if (ret == NULL)
		return (NULL);
	while (j < len)
	{
		ret[j] = s[i];
		i++;
		j++;
	}
	ret[j] = '\0';
	return (ret);
}
