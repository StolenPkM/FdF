/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:10:56 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/12 19:21:33 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ret;

	ret = (char *)malloc(sizeof(char) * size + 1);
	if (ret == NULL)
		return (NULL);
	ft_memset((void *)ret, 0, size + 1);
	return (ret);
}
