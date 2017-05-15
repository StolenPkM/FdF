/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <ybenoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 19:15:09 by ybenoit           #+#    #+#             */
/*   Updated: 2016/12/05 19:15:12 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char *ret;

	if (n > ft_strlen(str))
		n = ft_strlen(str);
	ret = malloc(n + 1);
	if (!ret)
		return (NULL);
	ft_strncpy(ret, str, n);
	ret[n] = '\0';
	return (ret);
}
