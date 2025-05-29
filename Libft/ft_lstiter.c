/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:35:07 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/28 16:41:41 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
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
