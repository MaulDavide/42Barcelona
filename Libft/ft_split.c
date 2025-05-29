/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:43:49 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/23 11:38:52 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s1, char c)
{
	size_t	count;
	size_t	i;
	int		flag;

	count = 0;
	flag = 0;
	i = 0;
	while (s1[i])
	{
		if (flag == 0 && s1[i] != c)
			flag = 1;
		if (flag == 1 && s1[i] == c)
		{
			flag = 0;
			count++;
		}
		i++;
	}
	if (flag == 1)
		count++;
	return (count);
}

static size_t	len_words(char const *s2, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s2[i] && s2[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	**free_mem(char const **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

static char	**affect(char const *s, char **dst, char c, size_t wrds)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i] && j < wrds)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dst[j] = (char *)malloc((len_words(s, c, i) + 1) * sizeof(char));
		if (!dst[j])
			return (free_mem((const char **)dst, j));
		while (s[i] && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = '\0';
		j++;
	}
	dst[j] = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	dst = (char **)malloc((len + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	return (affect(s, dst, c, len));
}
