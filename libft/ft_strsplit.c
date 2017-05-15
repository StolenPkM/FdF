/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:38:10 by ybenoit           #+#    #+#             */
/*   Updated: 2017/05/15 12:21:38 by pabonnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		w_r;
	char	**ret;
	int		i_tmp;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	w_r = ft_word_count(s, c);
	ret = (char **)malloc(sizeof(char *) * (w_r + 1));
	if (ret == NULL)
		return (NULL);
	while (w_r != 0 && s[i] != '\0')
	{
		i_tmp = (i == 0) ? 0 : i + 1;
		i = ft_next_char(s, c, i_tmp, j);
		ret[j] = (char *)malloc(sizeof(char) * (ft_char_count(s, c, i) + 1));
		ret[j] = ft_cp_new_elem(s, ft_char_count(s, c, i), i);
		w_r--;
		j++;
	}
	ret[j] = NULL;
	return (ret);
}
