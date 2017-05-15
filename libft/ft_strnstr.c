/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 09:18:06 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/09 09:26:24 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] != '\0' && len >= (size_t)ft_strlen((char *)little) && len--)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	if (little[0] == '\0')
		return ((char *)big + i);
	return (NULL);
}
