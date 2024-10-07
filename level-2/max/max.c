/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:06:03 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/07 11:12:08 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int				res;
	unsigned int	i;

	if (!tab)
		return (0);
	res = 0;
	i = 0;
	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	int	tab[5] = {54556464, 3, 3184, 0, -123};
	int	res = max(tab, 4);
	printf("%d", res);
}*/
