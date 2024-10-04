/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:58:25 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/04 12:10:25 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	rotate(char c)
{
	if (c != 'z' && c != 'Z')
		c += 1;
	else if (c == 'z')
		c = 'a';
	else if (c == 'Z')
		c = 'A';
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
			if (ft_isalpha(c))
				c = rotate(c);
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
