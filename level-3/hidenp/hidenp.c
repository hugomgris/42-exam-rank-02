/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:39:54 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/08 12:51:13 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strchr(char c, char *str, int pos)
{
	while (str[pos])
	{
		if (str[pos] == c)
			return (1);
		pos++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	l;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		l = 0;
		while (argv[1][l])
			l++;
		while (argv[1][i])
		{
			if (ft_strchr(argv[1][i], argv[2], i))
				l--;
			i++;
		}
		if (l == 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write (1, "\n", 1);
}
