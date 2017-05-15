/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 18:23:47 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/12 18:36:40 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*lst_cpy;

	if (!lst)
		return ;
	lst_cpy = lst;
	while (lst_cpy)
	{
		f(lst_cpy);
		lst_cpy = lst_cpy->next;
	}
}
