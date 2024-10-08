/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:31:39 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/07 18:10:35 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *s)
{
	int	nbr;

	nbr = 0;
	if (s[0] == '-')
		return (-1);
	while (*s)
		nbr = (nbr * 10) + (*s++ - '0');
	return (nbr);
}

int	ft_is_prime(int nbr)
{
	int	i;

	i = 2;
	if (nbr <= 1)
		return (0);
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	int	nb;

	if (n > 9)
		ft_putnbr(n / 10);
	nb = n % 10 + '0';
	write(1, &nb, 1);
}

int	main(int argc, char **argv)
{
	int	res;
	int	nbr;

	res = 0;
	nbr = ft_atoi(argv[1]);
	if (nbr < 0 || argc != 2)
	{
		write(1, "0\n", 1);
		exit (1);
	}
	while (nbr > 0)
	{
		if (ft_is_prime(nbr))
			res += nbr;
		nbr--;
	}
	ft_putnbr(res);
	write(1, "\n", 1);
}
