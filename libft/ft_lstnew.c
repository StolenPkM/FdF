/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:42:45 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/12 17:14:46 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ret;

	ret = (t_list*)malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	if (!content)
	{
		ret->content = NULL;
		ret->content_size = 0;
		ret->next = NULL;
		return (ret);
	}
	else
	{
		ret->content_size = content_size;
		ret->content = malloc(content_size);
		if (!(ret->content))
			return (NULL);
		ft_memcpy(ret->content, content, content_size);
	}
	ret->next = NULL;
	return (ret);
}
