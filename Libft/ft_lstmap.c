/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaulell <dmaulell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:42:33 by dmaulell          #+#    #+#             */
/*   Updated: 2025/05/28 17:10:06 by dmaulell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new_node;
	void	*content_transformed;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		content_transformed = (*f)(lst->content);
		new_node = ft_lstnew(content_transformed);
		if (!new_node)
		{
			(*del)(content_transformed);
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&first, new_node);
		lst = lst->next;
	}
	return (first);
}
/*
Parámetros:				lst: un puntero a un nodo.
						f: la dirección de un puntero a una función usada
						en la iteración de cada elemento de la lista.
						del: un puntero a función utilizado para eliminar
						el contenido de un nodo, si es necesario.
Valor devuelto:			La nueva lista.
						NULL si falla la reserva de memoria.
Funciones autorizadas:	malloc, free
Descripción:			Itera la lista ’lst’ y aplica la función ’f’ al
						contenido de cada nodo. Crea una lista resultante
						de la aplicación correcta y sucesiva de la función
						’f’ sobre cada nodo. La función ’del’ se utiliza
						para eliminar el contenido de un nodo, si hace
						falta.
*/
