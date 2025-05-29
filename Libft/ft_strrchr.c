/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:51:50 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/23 13:06:50 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	chr;

	chr = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == chr)
		return ((char *)&s[0]);
	return (NULL);
}
