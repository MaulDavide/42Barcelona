/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:38:40 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/28 16:55:22 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
/*
Parámetros:				lst: el nodo a liberar.
						del: un puntero a la función utilizada para liberar
						el contenido del nodo.
Valor devuelto:			Nada
Funciones autorizadas:	free
Descripción:			Toma como parámetro un nodo ’lst’ y libera la
						memoria del contenido utilizando la función ’del’
						dada como parámetro, además de liberar el nodo. La
						memoria de ’next’ no debe liberarse.
*/
