/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:54:45 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/09 13:11:55 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	tmp = *begin_list;
	if (cmp(tmp->data, data_ref) == 0)
	{
		*begin_list = tmp->next;
		free(tmp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		tmp = *begin_list;
		ft_list_remove_if(&tmp->next, data_ref, cmp);
	}
}
