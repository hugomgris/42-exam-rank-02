/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:40:58 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/08 11:24:31 by hmunoz-g         ###   ########.fr       */
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

int	*ft_range(int start, int end)
{
	int	*res;
	int	i;
	int	len;

	i = 0;
	len = len_calc(start, end);
	res = (int *)malloc(sizeof(int) * ((len) + 1));
	while (i < len + 1)
	{
		if (start < end)
			res[i] = start++;
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
		int	*res = ft_range(-1, 3);
		int	i = 0;
		while (i < 5)
		{
			printf("%d, ", res[i]);
			i++;
		}
}*/
