/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:34:14 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/08 10:39:38 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	count;

	if (begin_list == 0)
		return (0);
	count = 1;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}
