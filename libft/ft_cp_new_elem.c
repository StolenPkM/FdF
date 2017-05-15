/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cp_new_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 22:47:26 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/11 23:05:19 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cp_new_elem(char const *s, int len, int index1)
{
	int		j;
	int		i;
	char	*dest;

	j = 0;
	i = index1;
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	while (j < len)
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
