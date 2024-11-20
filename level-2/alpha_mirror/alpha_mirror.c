/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:46:32 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 15:01:26 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	left_side(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		return (1);
	return (0);
}

int	right_side(char c)
{
	if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		return (1);
	return (0);
}

char	conv(char c)
{
	if (left_side(c))
	{
		if (c >= 'a' && c <= 'z')
			c += 2 * ('m' - c) + 1;
		else if (c >= 'A' && c <= 'Z')
			c += 2 * ('M' - c) + 1;
	}
	else if (right_side(c))
	{
		if (c >= 'a' && c <= 'z')
			c -= 2 * (c - 'm') - 1;
		else if (c >= 'A' && c <= 'Z')
			c -= 2 * (c - 'M') - 1;
	}
	return (c);
}

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			c = argv[1][i];
			if (left_side(c))
				c = conv(c);
			else if (right_side(c))
				c = conv(c);
			write (1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
