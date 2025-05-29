/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:19:11 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/23 11:05:41 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	size_t	len;

	len = ft_strlen(s);
	duplicate = (char *)malloc((len + 1) * sizeof(char));
	if (!duplicate)
		return (NULL);
	ft_strlcpy(duplicate, s, len + 1);
	return (duplicate);
}
