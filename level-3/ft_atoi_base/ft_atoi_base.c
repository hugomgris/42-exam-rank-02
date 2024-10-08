/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:46:03 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/08 10:32:41 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	base_check(int c, int base_l)
{
	int		i;
	char	*lbase;
	char	*ubase;

	i = 0;
	lbase = "0123456789abcdef";
	ubase = "0123456789ABCDEF";
	while (i < base_l)
	{
		if (c == lbase[i] || c == ubase[i])
			return (1);
		i++;
	}
	return (0);
}

void	init(int *res, int *sign, int *i)
{
	*res = 0;
	*sign = 1;
	*i = 0;
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;
	int	i;

	init(&res, &sign, &i);
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && base_check(str[i], str_base))
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			res += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			res += str[i] - 'A' + 10;
		i++;
	}
	return (res * sign);
}

/*#include <stdio.h>
 int	main(void)
 {
 	printf("8888 : %d", ft_atoi_base("22B8", 16));
 	return (0);
}*/
