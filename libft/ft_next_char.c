/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 22:44:28 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/11 22:45:17 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_next_char(char const *s, char c, int index, int w_c)
{
	int i;

	i = (index == 0 && w_c != 0) ? index + 1 : index;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			return (i);
		i++;
	}
	return (i);
}
