/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:39:27 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/12 19:01:06 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *alst_tmp;

	alst_tmp = *alst;
	while (alst_tmp)
	{
		del(alst_tmp->content, alst_tmp->content_size);
		free(alst_tmp);
		alst_tmp = alst_tmp->next;
	}
	*alst = NULL;
}
