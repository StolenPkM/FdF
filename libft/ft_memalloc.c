/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:46:57 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/09 11:01:06 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ret;

	if (size == 0)
		return (NULL);
	ret = (void *)malloc(sizeof(size_t) * size);
	if (ret == NULL)
		return (NULL);
	ft_memset(ret, 0, size);
	return (ret);
}
