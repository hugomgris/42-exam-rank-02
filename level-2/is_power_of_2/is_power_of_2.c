/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:29:44 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/07 10:02:01 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	if (n % 2 == 0 || n == 1)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	pwr = is_power_of_2(atoi(argv[1]));
		printf("%d", pwr);
	}
	printf("\n");
	return (0);
}*/
