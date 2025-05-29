/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:22:02 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/21 11:14:37 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	rest;

	i = 0;
	rest = 0;
	while (i < n && s1[i] && s2[i] && rest == 0)
	{
		rest = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (rest == 0 && i < n)
		rest = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (rest);
}
