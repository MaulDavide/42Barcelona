/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:13:26 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/28 17:15:05 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!*lst || !lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
Parámetros:				lst: un puntero al primer nodo.
						f: un puntero a la función que utilizará cada nodo.
Valor devuelto:			Nada
Funciones autorizadas:	Ninguna
Descripción:			Itera la lista ’lst’ y aplica la función ’f’ en el
						contenido de cada nodo.
*/
