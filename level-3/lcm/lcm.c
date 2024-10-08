/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:52:40 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/08 13:05:26 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	c;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		c = a;
	else
		c = b;
	while (1)
	{
		if ((c % a == 0) && (c % b == 0))
			return (c);
		c++;
	}
}

/*#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	if (ac == 3)
 	{
 		unsigned int m = lcm(atoi(av[1]), atoi(av[2]));
 		printf("LCM: %u\n", m);
 	}
}*/
