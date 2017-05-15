/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 22:38:06 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/12 19:28:43 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	unsigned int	i;
	char			*ret;
	int				j;

	j = 0;
	i = 0;
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ret == NULL)
		return (NULL);
	while (s[i])
		i++;
	i--;
	while ((size_t)j != ft_strlen(s))
	{
		ret[j] = s[i];
		j++;
		i--;
	}
	ret[j] = '\0';
	return (ret);
}
