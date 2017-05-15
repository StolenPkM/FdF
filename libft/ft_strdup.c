/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:32:35 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/10 17:39:53 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*ret;

	ret = (char *)malloc(sizeof(char) * (ft_strlen((char *)str) + 1));
	i = 0;
	if (ret != NULL)
	{
		while (str[i] != '\0')
		{
			ret[i] = str[i];
			i++;
		}
	}
	else
		return (0);
	ret[i] = '\0';
	return (ret);
}
