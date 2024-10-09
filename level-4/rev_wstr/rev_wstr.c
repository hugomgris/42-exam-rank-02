/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:46:42 by hmunoz-g          #+#    #+#             */
/*   Updated: 2024/10/09 17:02:55 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;
	int	pos;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		while (i >= 0)
		{
			while (!argv[1][i] || is_space(argv[1][i]))
				i--;
			end = i;
			while (argv[1][i] && !is_space(argv[1][i]))
				i--;
			start = i + 1;
			pos = start;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if (pos)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
