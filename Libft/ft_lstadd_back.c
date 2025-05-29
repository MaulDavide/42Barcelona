/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:13:46 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/28 17:25:20 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	last_node = (*lst);
	if (*lst)
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new;
	}
	if (!(*lst))
		((*lst) = new);
}
/*
Parámetros:				lst: el puntero al primer nodo de una lista.
						new: el puntero a un nodo que añadir a la lista.
Valor devuelto:			Nada
Funciones autorizadas:	Ninguna
Descripción:			Añade el nodo ’new’ al final de la lista ’lst’.
*/
