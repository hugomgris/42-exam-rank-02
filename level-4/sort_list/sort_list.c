/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:37:09 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/09 18:49:54 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		aux;
	t_list	*start;

	start = lst;
	while (lst && lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			aux = lst->data;
			lst->data = lst->next->data;
			lst->next->data = aux;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return (start);
}
