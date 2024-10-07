/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:49:31 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/07 15:50:51 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strchr(char c, char *str, int *pos)
{
	int	i;

	i = *pos;
	while (str[i])
	{
		if (str[i] == c)
		{
			*pos = i;
			return (1);
		}
		i++;
	}
	return (0);
}

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	l;
	int	pos;

	if (argc == 3)
	{
		i = 0;
		l = 0;
		pos = 0;
		while (argv[1][l])
			l++;
		while (argv[1][i])
		{
			if (ft_strchr(argv[1][i], argv[2], &pos))
				l--;
			i++;
		}
		if (l == 0)
			print_str(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
