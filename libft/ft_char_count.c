/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 22:46:19 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/11 22:46:51 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_char_count(char const *s, char c, int index)
{
	int i;
	int ret;

	ret = 0;
	i = index;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		ret++;
	}
	return (ret);
}
