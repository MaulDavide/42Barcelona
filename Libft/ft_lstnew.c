/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:00:40 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/28 14:12:40 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = (void *)content;
	new_node->next = NULL;
	return (new_node);
}
/*
Parámetros:				content: el contenido con el que crear el nodo.
Valor devuelto:			El nuevo nodo
Funciones autorizadas:	malloc
Descripción:			Crea un nuevo nodo utilizando malloc(3). La
						variable miembro ’content’ se inicializa con el
						contenido del parámetro ’content’. La variable
						’next’, con NULL.
*/
