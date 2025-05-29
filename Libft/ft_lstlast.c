/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:43:10 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/28 14:12:28 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	else
	{
		while (lst->next != NULL)
			lst = lst->next;
	}
	return (lst);
}
/*
Parámetros:				lst: el principio de la lista.
Valor devuelto:			Último nodo de la lista.
Funciones autorizadas:	Ninguna
Descripción:			Devuelve el último nodo de la lista.
*/
