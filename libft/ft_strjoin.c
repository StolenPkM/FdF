/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:06:12 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/09 18:34:29 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ret;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	i = 0;
	ret = (char *)malloc(sizeof(char) * len);
	if (!ret)
		return (NULL);
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
		ret[j++] = s2[i++];
	ret[j] = '\0';
	return (ret);
}
