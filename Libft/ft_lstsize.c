/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:32:17 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/28 14:12:07 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	size_t	count;

	if (lst == NULL)
		return (0);
	else
	{
		current = lst;
		count = 0;
		while (current)
		{
			count++;
			current = current->next;
		}
	}
	return (count);
}
/*
Parámetros:				lst: el principio de la lista.
Valor devuelto:			La longitud de la lista.
Funciones autorizadas:	Ninguna
Descripción:			Cuenta el número de nodos de una lista.
*/
