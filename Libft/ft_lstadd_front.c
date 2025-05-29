/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:58:47 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/28 14:12:17 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
Parámetros:				lst: la dirección de un puntero al primer nodo de
						una lista.
						new: un puntero al nodo que añadir al principio de
						la lista.
Valor devuelto:			Nada
Funciones autorizadas:	Ninguna
Descripción:			Añade el nodo ’new’ al principio de la lista ’lst’.
*/
