/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:25:58 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/08 12:36:32 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len_calc(int start, int end)
{
	if (end - start < 0)
		return ((end - start) * -1);
	return (end - start);
}

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	len;
	int	i;

	len = len_calc(start, end);
	i = 0;
	res = (int *)malloc(sizeof(int) * (len + 1));
	while (i < len + 1)
	{
		if (start < end)
			res[i] = end--;
		else
			res[i] = start--;
		i++;
	}
	return (res);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
		int	*res = ft_rrange(1, 3);
		int i = 0;
		while (i < 3)
		{
			printf("%d, ", res[i]);
			i++;
		}
}*/
