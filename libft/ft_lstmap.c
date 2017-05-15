/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 18:38:05 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/12 19:49:19 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*first;

	first = NULL;
	if (lst)
	{
		first = f(ft_lstnew(lst->content, lst->content_size));
		new = first;
		while ((lst = lst->next))
		{
			new->next = f(ft_lstnew(lst->content, lst->content_size));
			new = new->next;
		}
		return (first);
	}
	return (NULL);
}
