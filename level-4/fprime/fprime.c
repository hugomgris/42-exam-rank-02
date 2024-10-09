/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:40:36 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/09 09:49:32 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	nb;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
		if (nb == 1)
			printf("1");
		i = 1;
		while (i <= nb)
		{
			i++;
			if (nb % i == 0)
			{
				printf("%d", i);
				if (nb == i)
					break ;
				printf("*");
				nb /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
