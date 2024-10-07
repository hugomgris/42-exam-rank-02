/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:04:48 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 19:24:41 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	sign = 1;
	n = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '=')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

/*#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
		printf("%d", atoi(argv[1]));
	}
	return (0);
}*/
